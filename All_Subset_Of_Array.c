#include<stdio.h>
#include<stdlib.h>

void print(int b[],int h){

printf("{");
for(int i=0;i<h;i++){
printf("%d,",b[i]);
}
printf("}");
printf("\n");
}

void subset(int a[],int b[],int n,int k,int h){
if(k>=n){
    print(b,h);
    return;
}
subset(a,b,n,k+1,h);
b[h]=a[k];
subset(a,b,n,k+1,h+1);

}
int main(int argc, char const *argv[])
{
    /* code */
    int *a;
    int *b;
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    a=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    b=malloc(n*sizeof(int));
    subset(a,b,n,0,0);
    return 0;
}
