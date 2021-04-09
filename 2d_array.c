

#include<stdio.h>
void print(int arr[])
{
   int n = sizeof(arr)/sizeof(arr[0]);
   int i;
   for (i = 0; i < n; i++)
 	  printf("%d ", arr[i]);
}

int main(void)
{
   int *p;

    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5]={1,2,3,4,5};

    // Points to 0th element of the arr.
    p = &arr;


    // Points to the whole array arr.
    ptr = &arr;
    printf("%d  %d %d\n\n",**ptr,ptr,*p);
    printf("%d %d \n\n",sizeof(arr),sizeof(ptr));

    printf("%d %d %d %d %d %d\n",p,ptr,arr,&arr,*arr,&(*arr));
    p++;
    ptr++;
    printf("%d %d\n",p,ptr);



    return 0;
}
