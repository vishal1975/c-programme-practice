 
 #include<stdio.h>
 #include<stdlib.h>
 int *insertion_sort(int a[],int n){
int i=0;
int key=0;
for(int j=1;j<n;j++){
    i=j-1;
    key=a[j];
    while(i>=0&&a[i]>key){

        a[i+1]=a[i];
        i=i-1;
    }
    a[i+1]=key;

}
return a;
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
    
    a=insertion_sort(a,n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
