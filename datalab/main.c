#include <stdio.h>
#include <stdlib.h>

   //yap� olusturma
   struct node{
   int data;
   struct node *left;
   struct node *right;

   };typedef struct node *BTREE;

   //insert fonksiyon yaz�lmal�
   BTREE insert(BTREE root,int x){
        if(root==NULL){
            //newNode func same
            BTREE new=malloc(sizeof(BTREE));
            new->left=new->right=NULL;
            new->data=x;
            return new;

        }
        //s�ral� eklemek
        if(root->data<x){
            //roottan daha b�y�k ->sag
            root->right=insert(root->right,x);
            return root;

        }
        else if(root->data>x){
            //gelen data daha kucuk
            root->left=insert(root->left,x);
            return root;

        }
   }
   //agacta traverse etmek gerekli
   void traverse(BTREE root){
   if(root==NULL)
    return;
   printf("%d\t",root->data);
   traverse(root->left);
   traverse (root->right);
   }
   // agactaki dugum say�s� hesaplanmal�
   int size (BTREE root){
       if(root==NULL)
        return 0;
       return size(root->left)+size(root->right)+1;
   }
   //agactaki parent sayisi hesaplanmali
   int countParents(BTREE root){
    if(root==NULL)
        return 0;
    int parent_say=0;
    if(root->left!=NULL||root->right!=NULL){
        parent_say++;

    }
    parent_say+=countParents(root->left);
    parent_say+=countParents(root->right);
    return parent_say;

   }
   //aranan deger agac icerisinde mevcut ise 1 dondursun
   int bul(BTREE root,int aranan){
   if(root==NULL)
        return -1;
   if(root->data==aranan)
        return 1;
   if(bul(root->left,aranan)==1)
        return 1;
   if(bul(root->right,aranan)==1)
        return 1;
   return -1;
}
int main(){
    BTREE root =NULL;
    root=insert(root,25);
    root=insert(root,12);
    root=insert(root,8);
    root=insert(root,32);
    root=insert(root,6);
    root=insert(root,88);

    traverse (root);
    printf("\nagactaki dugum sayisi=0%d\n",size(root));
    int sonuc =countParents(root);
    printf("agactaki parents sayisi=%d",sonuc);
    printf("\n fonsiyondan donen deger =%d",bul(root,99));
















 }





