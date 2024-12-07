%code requires {
  #include <memory>
  #include <string>
  #include "ast.hh"
}

%start CompUnit

%{
#include <iostream>
#include <memory>
#include <string>
#include "ast.hh"
using namespace std;

void yyerror(ASTNode* & ast, const char *s);
extern int yylex(void);

%}

//add a new param to the parser & error handling function
%parse-param { ASTNode* &ast }

%union {
    ASTNode *node;
}

%token <node> CONST
%token <node> INT VOID RETURN
%token <node> IDENT
%token <node> INT_CONST
%token <node> LP RP LB RB LC RC COMMA And OR SEMICOLON 
%token <node> IF ELSE WHILE BREAK CONTINUE



%left <node> Plus Sub Mul Div Mod GL LL LE GE EQ NE 
%right <node> Assign Not

%type <node> CompUnit Decl ConstDecl ConstDeclTail Type ConstDef ConstDefTail ConstInitVal ConstInitValTail FuncFParamTailTail
%type <node> ConstInitValTailTail VarDecl VarDeclTail VarDef VarDefGroup InitVal InitValTail InitValTailTail 
%type <node> FuncDef FuncFParams FuncFParamsTail FuncFParam FuncFParamTail Block BlockItem BlockItemTail 
%type <node> Stmt ReturnExp Exp LVal LValTail PrimaryExp Number UnaryExp UnaryOp FuncRParams FuncRParamsTail 
%type <node> MulExp MulOp AddExp AddOp RelExp RelOp EqExp EqOp LAndExp LOrExp ConstExp



%%

CompUnit
  : Decl {
    ast = new ASTNode("CompUnit", {$1});
  }
  | FuncDef {
    ast = new ASTNode("CompUnit", {$1});
  }
  | CompUnit Decl {
    ast = new ASTNode("CompUnit", {$1, $2});
  }
  | CompUnit FuncDef {
    ast = new ASTNode("CompUnit", {$1, $2});
  }
  ;

Decl
  : ConstDecl {
    $$ = new ASTNode("Decl", {$1});
  }
  | VarDecl {
    $$ = new ASTNode("Decl", {$1});
  }
  ;

ConstDecl
  : CONST Type ConstDef ConstDeclTail SEMICOLON {
    $$ = new ASTNode("ConstDecl", {$1, $2, $3, $4});
  }
  ;

ConstDeclTail
  : COMMA ConstDef ConstDeclTail {
    $$ = new ASTNode("ConstDeclTail", {$1, $2, $3});
  }
  | /* empty */ {
    $$ = NULL;
  }
  ;

Type
  : INT {
    $$ = new ASTNode("BType", {$1});
  }
  ;

ConstDef
  : IDENT ConstDefTail Assign ConstInitVal {
    $$ = new ASTNode("ConstDef", {$1, $2, $3, $4});
  }
  ;

ConstDefTail
  : LB ConstExp RB ConstDefTail {
    $$ = new ASTNode("ConstDefTail", {$1, $2, $3, $4});
  }
  | /* empty */ {
  }
  ;

ConstInitVal
  : ConstExp {
    $$ = new ASTNode("ConstInitVal", {$1});
  }
  | LC ConstInitValTail RC {
    $$ = new ASTNode("ConstInitVal", {$1, $2, $3});
  }
  ;

ConstInitValTail
  : ConstInitVal ConstInitValTailTail {
    $$ = new ASTNode("ConstInitValTail", {$1, $2});
  }
  | /* empty */ {
  }
  ;

ConstInitValTailTail
  : COMMA ConstInitVal ConstInitValTailTail {
    $$ = new ASTNode("ConstInitValTailTail", {$1, $2, $3});
  }
  | /* empty */ {
   
  }
  ;

VarDecl
  : Type VarDef VarDeclTail SEMICOLON {
    $$ = new ASTNode("VarDecl", {$1, $2, $3});
  }
  ;

VarDeclTail
  : COMMA VarDef VarDeclTail {
    $$ = new ASTNode("VarDeclTail", {$1, $2, $3});
  }
  | /* empty */ {
    $$ = NULL;
  }
  ;

VarDef
  : IDENT VarDefGroup {
    $$ = new ASTNode("VarDef", {$1, $2});
  }
  | IDENT VarDefGroup Assign InitVal {
    $$ = new ASTNode("VarDef", {$1, $2, $3, $4});
  }
  ;

VarDefGroup
  : LB ConstExp RB VarDefGroup {
    $$ = new ASTNode("VarDefGroup", {$1, $2, $3, $4});
  }
  | {
  
  }
  ;


InitVal
  : Exp {
    $$ = new ASTNode("InitVal", {$1});
  }
  | LC InitValTail RC {
    $$ = new ASTNode("InitVal", {$1, $2, $3});
  }
  ;

InitValTail
  : InitVal InitValTailTail {
    $$ = new ASTNode("InitValTail", {$1, $2});
  }
  | /* empty */ {

  }
  ;

InitValTailTail
  : COMMA InitVal InitValTailTail {
    $$ = new ASTNode("InitValTailTail", {$1, $2, $3});
  }
  | /* empty */ {
   
  }
  ;

FuncDef
  : Type IDENT LP FuncFParams RP Block {
    $$ = new ASTNode("FuncDef", {$1, $2, $3, $4, $5, $6});
  }
  | VOID Type IDENT LP FuncFParams RP Block {
    $$ = new ASTNode("FuncDef", {$1, $2, $3, $4, $5, $6});
  }
  ;


FuncFParams
  : FuncFParam FuncFParamsTail {
    $$ = new ASTNode("FuncFParams", {$1, $2});
  }
  | {}
  ;

FuncFParamsTail
  : COMMA FuncFParam FuncFParamsTail {
    $$ = new ASTNode("FuncFParamsGroup", {$1, $2, $3});
  }
  | /* empty */ {
  
  
  }
  ;

FuncFParam
  : Type IDENT FuncFParamTail {
    $$ = new ASTNode("FuncFParam", {$1, $2, $3});
  }
  ;

FuncFParamTail
  : LB RB FuncFParamTailTail {
    $$ = new ASTNode("FuncFParamTail", {$1, $2, $3});
  }
  | {
    $$ = new ASTNode("FuncFParamTail", {});
  }
  ;

FuncFParamTailTail
  : LB ConstExp RB FuncFParamTailTail {
    $$ = new ASTNode("FuncFParamTailTail", {$1, $2, $3, $4});
  }
  | {
    $$ = new ASTNode("FuncFParamTailTail", {});
  }
  ;


Block
  : LC BlockItemTail RC {
    $$ = new ASTNode("Block", {$1, $2, $3});
  }
  ;

BlockItemTail
  : BlockItem BlockItemTail {
    $$ = new ASTNode("BlockItemGroup", {$1, $2});
  }
  | /* empty */ {
 

  }
  ;

BlockItem
  : Decl {
    $$ = new ASTNode("BlockItem", {$1});
  }
  | Stmt {
    $$ = new ASTNode("BlockItem", {$1});
  }
  ;

Stmt
  : LVal Assign Exp SEMICOLON {
    $$ = new ASTNode("Stmt", {$1, $2, $3});
  }
  | Exp SEMICOLON {
    $$ = new ASTNode("Stmt", {$1});
  }
  | Block {
    $$ = new ASTNode("Stmt", {$1});
  }
  | IF LP Exp RP Stmt {
    $$ = new ASTNode("Stmt", {$1, $2, $3, $4, $5});
  }
  | IF LP Exp RP Stmt ELSE Stmt{
    $$ = new ASTNode("Stmt", {$1, $2, $3, $4, $5, $6, $7});
  } 
  | WHILE LP Exp RP Stmt {
    $$ = new ASTNode("Stmt", {$1, $2, $3, $4, $5});
  }
  | BREAK SEMICOLON {
    $$ = new ASTNode("Stmt", {$1});
  }
  | CONTINUE SEMICOLON {
    $$ = new ASTNode("Stmt", {$1});
  }
  | RETURN ReturnExp SEMICOLON {
    $$ = new ASTNode("Stmt", {$1, $2});
  }
  ;


ReturnExp
  : Exp {
    $$ = new ASTNode("ReturnExp", {$1});
  }
  | /* empty */ {
    $$ = NULL;
  }
  ;

Exp
  : LOrExp {
    $$ = new ASTNode("Exp", {$1});
  }
  ;

LVal
  : IDENT LValTail {
    $$ = new ASTNode("LVal", {$1, $2});
  }
  ;

LValTail
  : LB Exp RB LValTail {
    $$ = new ASTNode("LValTail", {$1, $2, $3, $4});
  }
  | /* empty */ {
    $$ = NULL;
  }
  ;

PrimaryExp
  : LP Exp RP {
    $$ = new ASTNode("PrimaryExp", {$1, $2, $3});
  }
  | LVal {
    $$ = new ASTNode("PrimaryExp", {$1});
  }
  | Number {
    $$ = new ASTNode("PrimaryExp", {$1});
  }
  ;

Number
  : INT_CONST {
    $$ = new ASTNode("Number", {$1});
  }
  ;

UnaryExp
  : PrimaryExp {
    $$ = new ASTNode("UnaryExp", {$1});
  }
  | IDENT LP FuncRParams RP {
    $$ = new ASTNode("UnaryExp", {$1, $2, $3, $4});
  }
  | UnaryOp UnaryExp {
    $$ = new ASTNode("UnaryExp", {$1, $2});
  }
  ;

UnaryOp
  : Plus {
    $$ = new ASTNode("UnaryOp", {$1});
  }
  | Sub {
    $$ = new ASTNode("UnaryOp", {$1});
  }
  | Not {
    $$ = new ASTNode("UnaryOp", {$1});
  }
  ;

FuncRParams
  : Exp FuncRParamsTail {
    $$ = new ASTNode("FuncRParams", {$1, $2});
  }
  ;

FuncRParamsTail
  : COMMA Exp FuncRParamsTail {
    $$ = new ASTNode("FuncRParamsTail", {$1, $2, $3});
  }
  | /* empty */ {
    $$ = NULL;
  }
  ;

MulExp
  : UnaryExp {
    $$ = new ASTNode("MulExp", {$1});
  }
  | MulExp MulOp UnaryExp {
    $$ = new ASTNode("MulExp", {$1, $2, $3});
  }
  ;

MulOp
  : Mul {
    $$ = new ASTNode("MulOp", {$1});
  }
  | Div {
    $$ = new ASTNode("MulOp", {$1});
  }
  | Mod {
    $$ = new ASTNode("MulOp", {$1});
  }
  ;

AddExp
  : MulExp {
    $$ = new ASTNode("AddExp", {$1});
  }
  | AddExp AddOp MulExp {
    $$ = new ASTNode("AddExp", {$1, $2, $3});
  }
  ;

AddOp
  : Plus {
    $$ = new ASTNode("AddOp", {$1});
  }
  | Sub {
    $$ = new ASTNode("AddOp", {$1});
  }
  ;

RelExp
  : AddExp {
    $$ = new ASTNode("RelExp", {$1});
  }
  | RelExp RelOp AddExp {
    $$ = new ASTNode("RelExp", {$1, $2, $3});
  }
  ;

RelOp
  : GL {
    $$ = new ASTNode("RelOp", {$1});
  }
  | LL {
    $$ = new ASTNode("RelOp", {$1});
  }
  | LE {
    $$ = new ASTNode("RelOp", {$1});
  }
  | GE {
    $$ = new ASTNode("RelOp", {$1});
  }
  ;

EqExp
  : RelExp {
    $$ = new ASTNode("EqExp", {$1});
  }
  | EqExp EqOp RelExp {
    $$ = new ASTNode("EqExp", {$1, $2, $3});
  }
  ;

EqOp
  : EQ {
    $$ = new ASTNode("EqOp", {$1});
  }
  | NE {
    $$ = new ASTNode("EqOp", {$1});
  }
  ;

LAndExp
  : EqExp {
    $$ = new ASTNode("LAndExp", {$1});
  }
  | LAndExp And EqExp {
    $$ = new ASTNode("LAndExp", {$1, $2, $3});
  }
  ;

LOrExp
  : LAndExp {
    $$ = new ASTNode("LOrExp", {$1});
  }
  | LOrExp OR LAndExp {
    $$ = new ASTNode("LOrExp", {$1, $2, $3});
  }
  ;

ConstExp
  : Exp {
    $$ = new ASTNode("ConstExp", {$1});
  }
  ;


%%

void yyerror(ASTNode* & ast, const char *s) {
  cerr <<  "Error type [B] at line [" << yylineno <<  "] : " << yytext << endl;
}

