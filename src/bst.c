/*
 *  NAME: BST
 *  DESC: Entity to define the structure of a Binary Search Tree
 *  AUTHOR: Philane Msibi
 *  Date: 16 August 2022
 * 
 */
#include <stdlib.h>
#include <stdio.h>
#include "../includes/bst.h"

BST* bst_constructor() {
    
    BST* bst = (BST*)calloc(1, sizeof(BST));

    if (bst == NULL) {
        perror("ERROR: Could not create BST object\n");
        exit(EXIT_FAILURE);
    }

    bst->size = 0;

    return bst;
}

void add_node(BST* bst, int data){
    
    if (bst == NULL) {
        perror("ERROR: Could not find BST object\n");
        exit(EXIT_FAILURE);
    }

    if (bst->root == NULL) {
        
        bst->root = (Node*)calloc(1, sizeof(Node));
        
        if (bst->root == NULL) {
            perror("ERROR: Could not create BST root node\n");
            exit(EXIT_FAILURE);
        }


        bst->root->data = data;
        bst->root->l_child = NULL;
        bst->root->r_child = NULL;
        bst->size++;
    } else {

        Node* curr = bst->root;
        Node* parent = NULL;

        while(1) {

            parent = curr;
        
            if (curr->data > data) {

                curr = curr->l_child;

                if (curr == NULL) {
                   parent->l_child = (Node*)calloc(1, sizeof(Node));

                   if (parent->l_child == NULL) {

                       perror("ERROR: Could not create node object\n");
                       exit(EXIT_FAILURE);
                   }
                   
                   parent->l_child->data = data;
                   parent->l_child->l_child = NULL;
                   parent->l_child->r_child = NULL;
                   curr = parent = NULL;
                   free(curr);
                   free(parent);
                   bst->size++;
                   return;
                }

            } else {

                curr = curr->r_child;

                if (curr == NULL) {
                   parent->r_child = (Node*)calloc(1, sizeof(Node));

                   if (parent->r_child == NULL) {

                       perror("ERROR: Could not create node object\n");
                       exit(EXIT_FAILURE);
                   }
                   
                   parent->r_child->data = data;
                   parent->r_child->l_child = NULL;
                   parent->r_child->r_child = NULL;
                   curr = parent = NULL;
                   free(curr);
                   free(parent);
                   bst->size++;
                   return;
                }
            }
        }
    }
}

//void remove_node(BST* bst, int data);

//void search_node(BST* bst, int data);

void transverse(BST* bst) {
    
    if (bst == NULL) {
        perror("ERROR: BST object is NULL\n");
        exit(EXIT_FAILURE);
    }

    if (bst->root == NULL) {
        perror("ERROR: BST has no elements\n");
        exit(EXIT_FAILURE);
    }
    
    inOrder(bst->root);
}

void inOrder(Node* node) {
    
    if (node == NULL)
        return;

    inOrder(node->l_child);
    printf("%d\n", node->data);
    inOrder(node->r_child);
}

int get_bst_size(BST* bst) {
    if (bst == NULL) {
        perror("ERROR: BST object not found\n");
        exit(EXIT_FAILURE);
    }

    return bst->size;
}

//void bst_destructor(BST* bst);

