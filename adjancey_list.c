#include<stdio.h>
#include<stdlib.h>
#include <limits.h> 
#include <stdbool.h> 

struct node{
int dest;
int weight;
struct node *next;
};

struct list{

    struct node *head;
};

struct list * initialize(int v){
struct list *adjlist;
adjlist=malloc(v*sizeof(struct list));
for (int i = 0; i < v; i++)
{
    adjlist[i].head=NULL;
}

return adjlist;

}

void add(struct list *adjlist,int source, int destination,int weight){
    struct node *p=malloc(sizeof(struct node));
    p->dest=destination;
    p->weight=weight;
    p->next=NULL;

if(adjlist[source].head==NULL){

    
    
    adjlist[source].head=p;

}
else
{
    struct node *temp=adjlist[source].head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;
    
}
}

void dfs(struct list *adjlist,int v){

int stack[v];
bool isvisited[v];
for (int i = 0; i < v; i++)
{
    isvisited[i]=false;
}
stack[0]=0;
isvisited[0]=true;
int rear=0;
while (rear!=-1)
{
    
int x=stack[rear];
rear=rear-1;

printf("%d ,",x);
struct node *temp=adjlist[x].head;

while (temp!=NULL)
{

     if (!isvisited[temp->dest]){

         
           rear=rear+1;
    stack[rear]=temp->dest;
    isvisited[temp->dest]=true;


     }
     temp=temp->next;
    
}




}

printf("\n\n");

}

void bfs1(struct list *adjlist,int v){

int a[v];
 bool isvisited[v];

for (int i = 0; i < v; i++)
{
    isvisited[i]=false;
}



int rear=-1;
int front=-1;
a[0]=0;
isvisited[0]=true;
rear=0;
front=0;

while(rear!=-1&&front!=-1){
    int x=a[front];

printf("%d ,",x);

if (front==rear)
{
    front=-1;
    rear=-1;
}
else
{
    front=front+1;
}

struct node *temp=adjlist[x].head;
while (temp!=NULL)
{
    if (!isvisited[temp->dest])
    {
        
    if (rear==front&&front==-1)
    {
        front=front+1;
    }
    
    
    rear=rear+1;
    a[rear]=temp->dest;
    isvisited[temp->dest]=true;
   
    
    }
    temp=temp->next;
}


}

printf("\n\n");

}


void traverse(struct list *adjlist,int v){

for (int i = 0; i < v; i++)
{

    printf("%d -->",i);
struct node *temp=adjlist[i].head;
while (temp!=NULL)
{
    printf("%d, ",temp->dest);
    temp=temp->next;
}
printf("\n\n");

}


}

void create(struct node arr[],int source, int destination,int weight,int i){


arr[i].






}


int minKey(int key[],bool check[],int v){

int min=0;
int min_value=INT_MAX;
for (int i = 0; i <v; i++)
{
    if (check[i]==false&&key[i]<min_value)
    {
        min_value=key[i];
        min=i;
    }
    
}

return min;


}

void printMST(int parent[], int key[],int v) 
{ 
    printf("Edge Weight\n"); 
    for (int i = 1; i < v; i++) 
        printf("%d - %d  %d \n", parent[i], i, key[i]); 
} 


void primMst(struct list *adjlist,int v){

int parent[v];
int key[v];
bool check[v];

for (int i = 0; i < v; i++)
{
    key[i]=INT_MAX;
    check[i]=false;
}
key[0]=0;
parent[0]=-1;



for (int i = 0; i < v; i++)
{
    int u=minKey(key,check,v);

    check[u]=true;

     struct node *temp=adjlist[u].head;

   while (temp!=NULL)
   {
       if(check[temp->dest]==false&&temp->weight<key[temp->dest]){
          key[temp->dest]=temp->weight;
          parent[temp->dest]=u;
       }
       temp=temp->next;
   }
   


}

printMST(parent,key,v);

}


int main(int argc, char const *argv[])
{
    struct list *adjlist;
    int v;
    int e;

    printf("enter the no of vertices\n");
    
    scanf("%d",&v);
    adjlist=initialize(v);
     
     struct node arr[e];





    printf("enter the no of edges\n");
    scanf("%d",&e);
    int source;
    int destintion;
    int weight;
    printf("enter all edges source , destination and weight\n");
    
    for (int i = 0; i <e; i++)
    {
        scanf("%d %d %d",&source,&destintion,&weight);
        add(adjlist,source,destintion,weight);
        add(adjlist,destintion,source,weight);

        create(arr,source,destintion,weight,i);

    }


    //  printf("traversing the Adjancey List\n\n");
    // traverse(adjlist,v);
    

    //  printf("bfs traversal\n\n");
    //  bfs1(adjlist,v);


    //   printf("DFS Traversal\n\n");
    //   dfs(adjlist,v);

    printf("minimum spanning  tree by prims algorithm\n\n");
    primMst(adjlist,v);

    
    

    return 0;
}
