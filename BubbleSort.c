#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int i,int j){

int temp=a[i];
a[i]=a[j];
a[j]=temp;

}
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)    {   
  
         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) {
              swap(arr,j,j+1); 
           }
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
    
     bubbleSort(a,n);
    printf("array after sorting \n");
     for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
    return 0;
}
