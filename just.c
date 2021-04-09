#include<stdio.h>
#include<stdlib.h>



int main(int argc, char const *argv[])
{
    struct node{
    int p;
    int q;
};


struct node *p;
int n;
printf("enter no of element ");

scanf("%d",&n);
p=(struct node *)malloc(n*sizeof(struct node));

for(int i=0;i<n;i++){

    scanf("%d %d",&p[i].p,&p[i].q);
}

printf("displaying the element \n\n");
for (int i = 0; i < n; i++)
{
    printf("%d  ,  %d \n",p[i].p,p[i].q);
}




    return 0;
}
