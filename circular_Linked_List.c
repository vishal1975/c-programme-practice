#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    
    struct Node *right;
};

struct Node *start=NULL;
struct Node *end=NULL;
void insert_at_beg(){
     struct Node  *temp=(struct Node *)malloc(sizeof(struct Node));

    printf("Enter data \n");
    scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        end=temp;
    }
    else{
        temp->right=start;
        start=temp;
        end->right=start;

    }
}
void insert_at_last(){
     struct Node  *temp=(struct Node *)malloc(sizeof(struct Node));

    printf("Enter data \n");
    scanf("%d",&temp->data);
    if(start==NULL){
        start=temp;
        end=temp;
    }
    else
    {
        end->right=temp;
        temp->right=start;
        end=end->right;
    }
    
}
void traverse(){
    struct Node * ptr=start;
    while(ptr!=end){
        printf("%d \n",ptr->data);
        ptr=ptr->right;
    }
    printf("%d",ptr->data);
}

void main()
{

     int t;

do
{
    /* code */
    int n;
    printf("1 for insert at last and 2 for forward traverse 3 for insert at start \n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
            insert_at_last();
             break;
    case 2:
            traverse();
            break;

    case 3:
            insert_at_beg();
            break;
    }
    printf("do you wish to continue, press '1' for continue and press '0' for stop ");
    scanf("%d",&t);

} while (t);

    
    
}
