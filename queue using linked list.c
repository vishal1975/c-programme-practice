#include<stdio.h>
#include<stdlib.h>
struct node{

    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;


void add(){
int data;
printf("enter data\n");
scanf("%d",&data);
struct node *toadd=malloc(sizeof(struct node));
toadd->data=data;
toadd->next=NULL;
if(front==NULL){
front=rear=toadd;


}
else
{
    rear->next=toadd;
    rear=rear->next;
}



}

void delete(){

if (front==NULL)
{
    printf("queue is already empty\n");
}
else if(front==rear)
{
    printf("deleted element is %d\n",front->data);
    front=rear=NULL;
}
else
{
   printf("deleted element is %d\n",front->data);
   front=front->next;
}




}

void traverse(){
    struct node *temp=front;
    while (temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    
}



int main(int argc, char const *argv[])
{
    
    char ch='y';
    int n;
   
   do
   {
       printf("press 1. to add element in queue,\n press 2. to delete element in a queue\n press 3 for traverse\n press 4. to exit\n");
       
       scanf("%d",&n);

          switch (n)
          {
          case 1:
              add();
              break;
          case 2:
                 delete();
              break;
          case 3:
               traverse();
               break;
         case 4:
               ch='n';
               break;
          
          default:
              break;
          }

   } while (ch=='y');
   


    return 0;
}
