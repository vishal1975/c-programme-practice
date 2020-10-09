#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *start=NULL;
void insert(){
    struct Node  *temp=(struct Node *)malloc(sizeof(struct Node));

    printf("Enter data \n");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(start==NULL){
        start=temp;
    }
    else{

            struct Node  *ptr=start;
            while ((ptr->right!=NULL))
            {
                /* code */
                ptr=ptr->right;
            }
            ptr->right=temp;
            temp->left=ptr;



    }

}

void forward_traverse(){
    struct Node  *temp=start;
    printf("%d \n",temp->right->right->data);
    while (temp!=NULL)
    {
        /* code */
        printf("data %d  and \n",temp->data);
        temp=temp->right;
    }

}


void main(){

    char c;
    printf("hello");
    int t;

do
{
    /* code */
    int n;
    printf("1 for insert and 2 for forward traverse \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
            insert();
             break;
    case 2:
            forward_traverse();
            break;


    }
    printf("do you wish to continue, press '1' for continue and press '0' for stop ");
    scanf("%d",&t);

} while (t);


}
