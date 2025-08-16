
#include<stdio.h>

int main()
{
double a,b,result;
printf("Enter two operands:");
scanf("%lf %lf",&a,&b);
char ch;
printf("Enter an operator (+,-,*,\):");
scanf(" %c",&ch);
switch (ch) {
case '+':
result = a + b;
printf("%.2lf + %.2lf = %.2lf\n",a,b,result);
break;
case'-':
result = a - b;
printf("%.2lf -%.2lf = %.2lf\n",a,b,result);
break;
case'*':
result = a * b;
printf("%.2lf * %.2lf = %.2lf\n",a,b,result);
break;
case'/':
if(b!=0){
result = a / b;
printf("%.2lf / %.2lf = %.2lf\n",a,b,result);
}
else{
printf("Division by zero is not allowed\n");
}
break;
default:
printf("Invalid operator");
}


return 0;
}
