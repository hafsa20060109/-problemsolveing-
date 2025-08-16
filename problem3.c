#include<stdio.h>

int main()
{
int x,y;
printf("Enter the value of x:\n");
scanf("%d",&x);
printf("Enter the value of y:\n");
scanf("%d",&y);
printf("After swapping\n");
x=x+y;
y=x-y;
x=x-y;

printf("x=%d\n",x);
printf("y=%d\n",y);



    return 0;
}

