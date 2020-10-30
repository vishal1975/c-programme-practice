#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int i,int j){
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}


int getleft(int a[],int i,int n){

    int left=2*i+1;
    if(left>=n){
        return -1;
    }
    return left;
}

int getright(int a[],int i,int n){
    int right=2*i+2;
    if(right>=n){
        return -1;
    }
    return right;
}


void maxHeapify(int a[],int i,int n){
    int largest=i;
    int left=getleft(a,i,n);
    int right=getright(a,i,n);

    if(left!=-1){
      if(right!=-1){
          if(a[largest]<a[left]){
              largest=left;
          }
          if(a[largest]<a[right])
             largest=right;
      }
      else
      {
          if(a[largest]<a[left]){
              largest=left;
          }
      }
      
      if(largest!=i){
          swap(a,largest,i);
          maxHeapify(a,largest,n);
      }

    }

}

void buildMaxHeap(int a[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        maxHeapify(a,i,n);
    }
}


void heapsort(int a[],int n){
    buildMaxHeap(a,n);
    for (int i = n-1; i >0; i--)
    {
        swap(a,0,i);
        maxHeapify(a,0,i);
        /* code */
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
    heapsort(a,n);

    printf("array after sorting \n");
     for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
    return 0;
}
