#include <stdio.h> //code for sum of odd numbers between  1 to b
int main()
{
    int a,b,sum=0;

printf("Enter the value of B:");
scanf("%d",&b);

for (a=1;a<=b;a=a+2){

sum=sum+a;

}

printf("Sum=%d",sum);

return 0;
}
