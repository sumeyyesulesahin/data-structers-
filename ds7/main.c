#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node*left;
    struct node *right;
};
typedef struct node *BTREE;

 void preorder (BTREE * root){
     if(root!=NULL){
        printf("%d",root->data);
        preorder(root->left);
        preorder(root->righ);
     }
 }
void inorder(BTREE*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d",root->data);
        inorder(root->right);
    }
}
void postorder(BTREE *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data);
    }
}
//ikili agac olusturmak
BTREE *new_node(int data){
    BTREE *p=(BTREE*)malloc(sizeof(BTREE));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
//ikili agaca veri eklemek
BTREE *insert(BTREE *root,int data){
    if(root!=NULL){
        if(data<root->data)
            root->left=insert(root->left,data);
        else
            root->right=insert(root->right,data);
    }
    else
        root=new_node(data);
        return root;
    }
















int main()
{

}
