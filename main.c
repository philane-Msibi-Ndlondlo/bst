#include <stdio.h>
#include "includes/bst.h"

int main(void) {

    BST* bst = bst_constructor();

    add_node(bst, 5); 
    add_node(bst, 3); 
    add_node(bst, 9); 
    
    transverse(bst);
    return 0;
}
