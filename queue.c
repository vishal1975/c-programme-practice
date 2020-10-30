#include<stdio.h>
#include<stdlib.h>

int rear=-1;
int front=-1;
 int *a;
 int capacity;

void enqueue(int data){

if(rear==-1&&front==-1){
    rear++;
    front++;
    a[rear]=data;

}
else{
    rear=rear+1;
    a[rear]=data;
}

}
void dequeue(){

if(rear==-1&&front==-1){

    printf("already enptyt");
    return ;
}
else if(rear==front){

      a[front]='\0';
      front=-1;
      rear=-1;
}
else{

    a[front]='\0';
    front=front+1;
}

}

int main(int argc, char const *argv[])
{
    /* code */
    capacity=10;
    a=malloc(capacity*sizeof(int));
    int choice=0;
    do
    {
        /* code */
        int n;
        printf("press 1 for inserting or press 2 for deleting \n");
        scanf("%d",&n);
        switch (n)
        {
        case 1:
                int data;
                printf("enter data");
                scanf("%d",&data);
                enqueue(data);
                 break;
        case 2: 
                dequeue();
        default:
            break;
        }

     printf("press 1 for continue and press 0 for exit\n");
     scanf("%d",&choice);

    } while (choice);
    
   


    return 0;
}
