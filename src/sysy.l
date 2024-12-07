%option noinput
%option nounput
%option noyywrap
%option yylineno

%{
#include <string>
#include <cstdlib>

#include "sysy.tab.hh"
#include "ast.hh"

using namespace std;
%}

WhiteSpace      [ \t\n\r]*
LineComment     "//".*
Identifier      [a-zA-Z_][a-zA-Z0-9_]*

Decimal         [1-9][0-9]*
Octal           0[0-7]*
Hexadecimal   0[xX][0-9a-fA-F]+



%%

{WhiteSpace}                                    {}
{LineComment}                                   {}
"int"                                           {yylval.node = new ASTNode("Int"); return INT;}
"return"                                        {yylval.node = new ASTNode("Return"); return RETURN;}
{Identifier}                                    {yylval.node = new ASTNode("Ident"); return IDENT;}
{Decimal}                                       {yylval.node = new ASTNode("Int_Const"); return INT_CONST;}
{Octal}                                         {yylval.node = new ASTNode("Int_Const"); return INT_CONST;}
{Hexadecimal}                                   {yylval.node = new ASTNode("Int_Const"); return INT_CONST;}


"if"                                            { yylval.node = new ASTNode("If"); return       IF   ;}    
"else"                                          { yylval.node = new ASTNode("Else"); return     ELSE   ;}    
"while"                                         { yylval.node = new ASTNode("While"); return    WHILE   ;}        
"break"                                         { yylval.node = new ASTNode("Break"); return    BREAK   ;}    
"continue"                                      { yylval.node = new ASTNode("Continue"); return CONTINUE   ;}
";"                                             { yylval.node = new ASTNode("SemiColon"); return  SEMICOLON   ;}
"("                                             { yylval.node = new ASTNode("LP"); return  LP   ;}
")"                                             { yylval.node = new ASTNode("RP"); return  RP   ;}
"["                                             { yylval.node = new ASTNode("LB"); return  LB   ;}
"]"                                             { yylval.node = new ASTNode("RB"); return  RB   ;}
"{"                                             { yylval.node = new ASTNode("LC"); return  LC   ;}
"}"                                             { yylval.node = new ASTNode("RC"); return  RC   ;}
","                                             { yylval.node = new ASTNode("Comma"); return COMMA ;}
"&&"                                            { yylval.node = new ASTNode("And"); return  And    ;}
"||"                                            { yylval.node = new ASTNode("Or"); return    OR   ;}
"！"                                            { yylval.node = new ASTNode("Not"); return    Not   ;}
"+"                                             { yylval.node = new ASTNode("Plus"); return       Plus       ;}                                                               
"-"                                             { yylval.node = new ASTNode("Sub"); return       Sub        ;}   
"*"                                             { yylval.node = new ASTNode("Mul"); return       Mul        ;}   
"/"                                             { yylval.node = new ASTNode("Div"); return       Div        ;}   
"%"                                             { yylval.node = new ASTNode("Mod"); return       Mod        ;}   
">"                                             { yylval.node = new ASTNode("GL"); return       GL         ;}   
"<"                                             { yylval.node = new ASTNode("LL"); return       LL         ;}   
"<="                                            { yylval.node = new ASTNode("LE"); return       LE         ;}       
">="                                            { yylval.node = new ASTNode("GE"); return       GE         ;}       
"=="                                            { yylval.node = new ASTNode("EQ"); return       EQ         ;}       
"!="                                            { yylval.node = new ASTNode("NE"); return       NE         ;}       
"="                                             { yylval.node = new ASTNode("Assign"); return       Assign     ;}

.                                               {return yytext[0];}

%%