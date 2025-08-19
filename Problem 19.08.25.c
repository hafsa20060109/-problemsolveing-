#include<stdio.h>
int main(){
int i,start,end,sum=0;
printf("Enter two  numbers :");
scanf("%d %d",&start,&end);
for( i = start ; i <=end ; i++){
sum += i ;

printf("%d",i);
if(i<end)
{
printf("+");
}
}


printf("=%d",sum);





return 0;
}




