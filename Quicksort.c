#include<stdio.h>
#include<stdlib.h>
void swap1(int a[],int i,int j){

    int k=a[i];
    a[i]=a[j];
    a[j]=k;
}

int quick(int a[],int i,int j,int k){
    int pivot=a[k];
    int h=i;
    for(int p=i;p<j;p++){

        if(a[p]<=pivot){

         swap1(a,h,p);
         h++;
        }
    }
    
    swap1(a,h,k);
    return h;

}

void quiksort(int a[],int  i,int j){
    if(i>=j){
        return;
    }


int l=quick(a,i,j,j);

quiksort(a,i,l-1);
quiksort(a,l+1,j);

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
    
   quiksort(a,0,n-1);
  
    for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
   
    

    return 0;
}
