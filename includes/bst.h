/*
 *  NAME: BST
 *  DESC: Entity to define the structure of a Binary Search Tree
 *  AUTHOR: Philane Msibi
 *  Date: 16 August 2022
 * 
 */

#ifndef BST_H
#define BST_H

typedef struct NODE_STRUCT {
    int data;
    struct NODE_STRUCT* l_child;
    struct NODE_STRUCT* r_child;
} Node;

typedef struct BST_STRUCT {
    int size;
    Node* root;
} BST;


BST* bst_constructor(int size);

void add_node(BST* bst, int data);

void remove_node(BST* bst, int data);

void search_node(BST* bst, int data);

void transverse(BST* bst);

void bst_destructor(BST* bst);

#endif
