#include<stdio.h>
void hanoi(char a,char b,char c,int n){
if(n==0){
    return;
}
hanoi(a,c,b,n-1);

printf("disk %d is transfered from %c to %c \n",n,a,c);
hanoi(b,a,c,n-1);

}



int main()
{
    int n;
    printf("enter no of disk");
    scanf("%d",&n);
    hanoi('A','B','C',n);
    
    return 0;
}
