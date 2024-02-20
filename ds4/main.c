#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
int height;
struct node *left;
struct node *right;
};
typedef struct node AVLTREE;

int height(AVLTREE *root) {
    if(root == NULL)
      return-1;
    else {
    int left_height, right_height;
    left_height = height(root-> left);
    right_height = height(root-> right);if(right_height > left_height)
      return right_height + 1;
    else
        return left_height + 1;}
    }

    int maxValue(int a, int b) {
    return (a > b) ? a : b;
}


AVLTREE *newNode(int data) {
    AVLTREE *node = (AVLTREE *)malloc(sizeof(AVLTREE));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 0;
    return node;
}

AVLTREE * rightRotate(AVLTREE *z){

   AVLTREE *temp = z->left;
   z->left=temp->right;
   temp->right=z;
   z->height=maxValue(height(z->left),height(z->right))+1;
   temp->height=maxValue(height(temp->left),height(temp->right))+1;

}

AVLTREE *leftRotate(AVLTREE *z){

   AVLTREE *temp =z->right;
   z->right=temp->left;
   temp->left=z;
   z->height=maxValue(height(z->left),height(z->right))+1;
   temp->height=maxValue(height(temp->left),height(temp->right))+1;
   return temp;

}

AVLTREE *leftrightRotate(AVLTREE*z){

   z->left=leftRotate(z->left);
   return rightRotate(z);
}

AVLTREE *rightleftRotate(AVLTREE*z){
    z->right=rightRotate(z->right);
    return leftRotate(z);
}
AVLTREE *insertToAVL(int x,AVLTREE *tree){
    if(tree!=NULL)
    {
        if(x<tree->data)
            tree->left=insertToAVL(x,tree->left);

        else if(x>tree->data)
            tree->right=insertToAVL(x,tree->right);

        else
            return tree;

        tree->height=maxValue(height(tree->left),height(tree->right))+1;

        if((height(tree->left)-height(tree->right)) > 1 && x < tree->left->data)
            return rightRotate(tree);
        if((height(tree->left)-height(tree->right)) > 1 && x > tree->left->data)
            return leftrightRotate(tree);
        if((height(tree->left)-height(tree->right)) <-1 && x > tree->right->data)
           return leftRotate(tree);
        if((height(tree->left)-height(tree->right)) <-1 && x < tree->right->data)
            return rightleftRotate(tree);
    }
    else
        tree = newNode(x);
    return tree;

}



int main()
{

}
