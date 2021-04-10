#include<stdio.h>
int main(int argc, char const *argv[])
{
    
int at[]={0,1,2,5};
int bt[]={3,2,1,2};

printf("   AT  BT  WT  TAT\n");
int sum1=0;
int sum2=0;
int wt=0;
int tat=0;
int avg_wt=0;
int avg_tat=0;
for(int i=0;i<4;i++){
    sum2=sum2+bt[i];
wt=sum1-at[i];
tat=sum2-at[i];

sum1=sum1+bt[i];
avg_wt+=wt;
avg_tat+=tat;
printf("P%d %d   %d   %d   %d\n",i+1,at[i],bt[i],wt,tat);
}
printf("average waiting time is = %f\n",avg_wt/4.0);
printf("average turn around time is = %f\n",avg_tat/4.0);

    return 0;
}
