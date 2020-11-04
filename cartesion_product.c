
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n1;
    int n2;


printf("enter the size of set1\n");
scanf("%d",&n1);
int a1[n1];
printf("enter the set1 element\n");
for(int i=0;i<n1;i++){
    scanf("%d",&a1[i]);
}
printf("\n");

printf("enter the size of set2\n");
scanf("%d",&n2);
int a2[n2];
printf("enter the set2 element\n");
for(int i=0;i<n2;i++){
    scanf("%d",&a2[i]);
}
printf("Cartesian Product Of Two Set\n");
printf("{ ");
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        printf("{%d,%d} ,",a1[i],a2[j]);
    }
}
printf(" }");
}
