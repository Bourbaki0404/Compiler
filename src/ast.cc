// ast.cpp
#include "ast.hh"


inline void freeTree(ASTNode* node) {
    if (node == nullptr) {
        return; // Base case: if the node is null, return
    }

    // Recursively free all child nodes
    for (auto child : node->_children) {
        freeTree(child); // Recursive call to free each child
    }

    // Once all children are freed, delete the current node
    delete node;
}