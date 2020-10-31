#include<stdio.h>
#include<stdlib.h>

void swap(int a[],int i,int j){

int temp=a[i];
a[i]=a[j];
a[j]=temp;

}


void selectionSort(int a[], int n) 
{ 
    int i, j, min; 
  
    
    for (i = 0; i < n-1; i++) 
    { 
       
        min = i; 
        for (j = i+1; j < n; j++) 
          if (a[j] < a[min]) 
            min = j; 
  
        
        swap(a,min,i); 
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
    
     selectionSort(a,n);
    printf("array after sorting \n");
     for(int i=0;i<n;i++){
        printf("%d ,",a[i]);
    }
    return 0;
}
