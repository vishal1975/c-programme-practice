#include<stdio.h>
int main()
{
    int a[]={1,2,3,5},b[]={2,4,6,9,10,11},i=0,j=0,k=0;
    int x=sizeof(a)/sizeof(i),y=sizeof(b)/sizeof(i);
    int c[x+y];

    while(i<x||j<y)
    {if(i<x&&j<y)
       {
        if(a[i]<b[j])
           {
             c[k++]=a[i++];
           }
        else if(a[i]>b[j])
        {
            c[k++]=b[j++];
        }
        else
        {
            c[k++]=a[i++];
            j++;
        }
       }
       else if (i<x)
           c[k++]=a[i++];
       else
           c[k++]=b[j++];
    }
    for(i=0;i<k;i++)
    printf("%d\t",c[i]);
   return 0;
}

