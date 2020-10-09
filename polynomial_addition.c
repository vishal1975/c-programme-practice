#include<stdio.h>
#include<stdlib.h>
struct Node{
    int exponent;
    int coffecient;
    
    struct Node *right;
};

void insert_end(struct Node ** start,struct Node ** end,int coffecient,int exponenet){
     struct Node  *temp=(struct Node *)malloc(sizeof(struct Node));
     temp->coffecient=coffecient;
     temp->exponent=exponenet;
     if(*start==NULL){
         *start=temp;
         *end=temp;

     }
     else
     {
         (*end)->right=temp;
         *end=(*end)->right;
     }
     
}

void traverse(struct Node * start){
    struct Node *temp=start;
    while (temp!=NULL)
    {
        printf("%dx^%d + ",temp->coffecient,temp->exponent);
        temp=temp->right;
    }
    printf("\n");
    
}
void addition(struct Node * poly1,struct Node * poly2,struct Node ** poly3,struct Node ** end){
    /*
    struct Node *p=poly1;
    struct Node *q=poly2;
    struct Node *s=poly3;
*/
    while(poly1!=NULL&&poly2!=NULL){

        if (poly1->exponent==poly2->exponent){
           insert_end(poly3,end,poly1->coffecient+poly2->coffecient,poly1->exponent);
           poly1=poly1->right;
           poly2=poly2->right;
        }
        else if(poly1->exponent>poly2->exponent){
            insert_end(poly3,end,poly1->coffecient,poly1->exponent);
           poly1=poly1->right;
          
        }
        else if(poly2->exponent>poly1->exponent){
             insert_end(poly3,end,poly2->coffecient,poly2->exponent);
           poly2=poly2->right;
        }
       
        
    }
    while (poly1!=NULL)
    {
        insert_end(poly3,end,poly1->coffecient,poly1->exponent);
           poly1=poly1->right;
    }
    while (poly2!=NULL)
    {
         insert_end(poly3,end,poly2->coffecient,poly2->exponent);
           poly2=poly2->right;
    }
    
    
}

void main(){
struct Node *start1=NULL;
struct Node *start2=NULL;
struct Node *start3=NULL;
struct Node *end1=NULL;
struct Node *end2=NULL;
struct Node *end3=NULL;
insert_end(&start1,&end1,4,2);
insert_end(&start1,&end1,6,1);
insert_end(&start1,&end1,8,0);

printf("first polynomial is \n\n");
traverse(start1);
insert_end(&start2,&end2,4,2);
insert_end(&start2,&end2,6,1);
insert_end(&start2,&end2,8,0);
printf("second polynomial is \n\n");
traverse(start2);
addition(start1,start2,&start3,&end3);
printf("summation of polynomial is \n\n");
traverse(start3);

}