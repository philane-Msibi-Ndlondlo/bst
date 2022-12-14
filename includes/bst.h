/*
 *  NAME: BST
 *  DESC: Entity to define the structure of a Binary Search Tree
 *  AUTHOR: Philane Msibi
 *  Date: 16 August 2022
 * 
 */

#ifndef BST_H
#define BST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE_STRUCT {
    int data;
    struct NODE_STRUCT* l_child;
    struct NODE_STRUCT* r_child;
} Node;

typedef struct BST_STRUCT {
    int size;
    Node* root;
} BST;


BST* bst_constructor();

void add_node(BST* bst, int data);

void remove_node(BST* bst, int data);

void search_node(BST* bst, int data);

void transverse(BST* bst);

void inOrder(Node* node);

int get_bst_size();

void bst_destructor(BST* bst);

#endif
