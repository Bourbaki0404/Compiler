#ifndef AST_H
#define AST_H

#include <iostream>
#include <vector>
#include <memory>
#include <set>
#include <functional>

extern char* yytext;
extern int yylineno;

using namespace std;


struct container{
    int int_val;
    string str_val;
};


struct ASTNode{
    public:
    ASTNode(string type, vector<ASTNode*> children):_type(type){
        for(int i = 0; i < children.size(); ++i){
            if(children[i] != NULL)
                _children.push_back(children[i]);
        }
        size_t size = type.size();
        if(type.size() > 6 && type.substr(type.size() - 5, 5) == "Group"){
            for(int i = 0; i < _children.size(); i++){
                size = _children[i]->_type.size();
                if(size > 5 && _children[i]->_type.substr(size - 5, 5) == "Group"){
                    auto ptr = _children[i];
                    _children.erase(_children.begin() + i);
                    _children.insert(_children.begin() + i, ptr->_children.begin(), ptr->_children.end());
                }
            }
        }

        if(_children.empty())
            lineno = yylineno;
        else
            lineno = _children[0]->lineno;
        save_val();
    }
    ASTNode(string type):_type(type){
        lineno = yylineno;
        save_val();
    }
    void save_val(){
        if(intset.count(_type) > 0)
            con.int_val = atoi(yytext);
        if(strset.count(_type) > 0)
            con.str_val = {yytext};
    }
    // ASTNode(string type):_type(type){}
    void printAST(const ASTNode* node, int indent = 0) {
        if (node == nullptr) {
            return; // Base case: if the node is null, return
        }

        // Print the current node's type with indentation
        if(nonterminals.count(node->_type)){
            std::cout << std::string(indent, ' ') << node->_type << "(" << node->lineno << ")" << std::endl;
        }else{
            if(intset.count(node->_type)){
                std::cout << std::string(indent, ' ') << node->_type << " : " << node->con.int_val  << std::endl;
            }else if(strset.count(node->_type)){
                std::cout << std::string(indent, ' ') << node->_type << " : " << node->con.str_val  << std::endl;
            }else if(typeset.count(node->_type)){
                string type_name = node->_type;
                type_name[0] = tolower(type_name[0]);
                std::cout << std::string(indent, ' ') << "Type" << " : " << type_name << std::endl;
            }else{
                std::cout << std::string(indent, ' ') << node->_type << std::endl;
            }
        }

        // Recursively print each child node with increased indentation
        for (const auto& child : node->_children) {
            printAST(child, indent + 2); // Increase indentation for child nodes
        }
    }

    public:
    string _type;
    vector<ASTNode*> _children;
    container con;
    size_t lineno;
    const set<string> intset = {"Int_Const"};
    const set<string> strset = {"Ident"};
    const set<string> nonterminals = {
        "CompUnit",    
        "Decl",        
        "ConstDecl",   
        "BType",       
        "ConstDef",    
        "ConstInitVal",
        "VarDecl",     
        "VarDef",
        "VarDefGroup",               
        "InitVal",  
        "Type",          
        "FuncDef",     
        "FuncType",    
        "FuncFParams", 
        "FuncFParam",  
        "Block",       
        "BlockItem",   
        "Stmt",        
        "Exp",         
        "LVal",        
        "PrimaryExp",  
        "Number",      
        "UnaryExp",    
        "UnaryOp",     
        "FuncRParams", 
        "MulExp",      
        "AddExp",      
        "RelExp",      
        "EqExp",       
        "LAndExp",     
        "LOrExp",      
        "ConstExp"    
    };
    const set<string> typeset{
        "Int",
        "Void",
        "Float"
    };
    const set<string> epsilonSet = {

    };
};

void freeTree(ASTNode* node); 

#endif

