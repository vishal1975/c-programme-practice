#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int i,int j,int mid){
    int b[j-i+1];
    int h=i;
    int k=mid+1;
    int l=0;
    while(h<=mid&&k<=j){
       if(a[h]<=a[k]){
           b[l++]=a[h];
           h++;
       }
       else if(a[h]>a[k]){
           b[l++]=a[k];
           k++;
       }
    }
    while(h<=mid){
        b[l++]=a[h];
        h++;
    }
    while(k<=j){
        b[l++]=a[k];
        k++;
    }
    int p=0;
    for(l=i;l<=j;l++){
        a[l]=b[p++];
    }
}


void mergesort(int a[],int i,int j,int n){
if(i>=j){
    return ;
}
int mid=(i+j)/2;
mergesort(a,i,mid,n);
mergesort(a,mid+1,j,n);
merge(a,i,j,mid);

}

int main(int argc, char const *argv[])
{
    /* code */

       int n;
    printf("enter size of array\n");
    scanf("%d",&n);
    int *a;
    a=malloc(n*sizeof(int));

    printf("enter array element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
   mergesort(a,0,n-1,n);
  
    for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }


    return 0;
}
