#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=2;
    int *p=&a;
    int *q=p;
    printf("%d \n",&p);
    printf("%d \n",q);
    printf("%d \n",p);
    printf("%d \n",*p);
    printf("%d \n",*q);
    return 0;
}
