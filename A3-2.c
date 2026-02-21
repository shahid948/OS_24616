#include<stdio.h>
int main(){
   int at[5]={0,0,0,0,0};
   int bt[5]={5,7,6,8,5};
   int bt2[5]={3,2,4,2,5};
   int io[5]={2,2,3,1,2};
   int pct[5],ct[5],tat[5],wt[5];
   for(int i=0;i<5;i++){
    if(i==0){
       pct[i]=at[i]+bt[i]+io[i];
    }
    else{
        pct[i]=pct[i-1]+at[i]+bt[i]+io[i];
    }
   }
   for(int i=0;i<5;i++){
    if(i==0){
      ct[i]=pct[5-1-i]+bt2[i];
    }
    else{
        ct[i]=ct[i-1]+bt2[i];
    }
   }
   for(int i=0;i<5;i++){
     tat[i]=ct[i]-at[i];
     wt[i]=tat[i]-(bt[i]+bt2[i]);
   }

   printf("PCT\tCT\tTAT\tWT\n");
   for(int i=0;i<5;i++){
    printf("%d\t%d\t%d\t%d\n",pct[i],ct[i],tat[i],wt[i]);
   }

}