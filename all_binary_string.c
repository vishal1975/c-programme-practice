#include<stdio.h>
#include<stdlib.h>
void binary_conversion(int n,char *a){
if(n<1){
    printf("%s\n",a);
return;
}
a[n-1]='0';
binary_conversion(n-1,a);
a[n-1]='1';
binary_conversion(n-1,a);

}

int main(int argc, char const *argv[])
{
    /* code */
    int n;
    scanf("%d",&n);
    char *a=malloc(n*sizeof(char));
    binary_conversion(n,a);
    return 0;
}
