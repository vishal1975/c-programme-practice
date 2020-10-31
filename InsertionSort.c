#include<stdio.h>
#include<stdlib.h>
void insertionSort(int a[],int n){
int key=0;
int j=0;
for(int i=1;i<n;i++){
      key=a[i];
      j=i-1;
     while(j>=0&&a[j]>key){
       a[j+1]=a[j];
       j=j-1;

     }
     a[j+1]=key;

}

}
int main(int argc, char const *argv[])
{
    int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *a;
    a=malloc(n*sizeof(int));

    printf("enter array element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
     insertionSort(a,n);
    printf("array after sorting \n");
     for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
    return 0;
}
