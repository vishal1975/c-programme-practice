
#include<stdio.h>
#include<stdlib.h>
void main(){
    int n1;
    int n2;


printf("enter the size of set1\n");
scanf("%d",&n1);
int a1[n1];
printf("enter the set1 element\n");
for(int i=0;i<n1;i++){
    scanf("%d",&a1[i]);
}
printf("\n");

printf("enter the size of set2\n");
scanf("%d",&n2);
int a2[n2];
printf("enter the set2 element\n");
for(int i=0;i<n2;i++){
    scanf("%d",&a2[i]);
}

int i=0;
int j=0;

printf("Symmeteric difference of two set \n");


printf("{ ");
while(i<n1&&j<n2){
    if(a1[i]<a2[j]){
        printf("%d ",a1[i]);
        i++;
    }
    else if(a2[j]<a1[i]){
        printf("%d ",a2[j]);
        j++;
    }
    else if(a2[j]==a1[i]){

        i++;
        j++;
    }
}


while(i<n1){
     printf("%d ",a1[i]);
        i++;
}
while(j<n2){
     printf("%d ",a2[j]);
        j++;
}

printf("}");

}

