#include <stdio.h> //code for sum of numbers from A to B 
int main()
{
    int a,b,x,sum=0;

printf("Enter the value of A:");
scanf("%d",&a);

printf("Enter the value of B:");
scanf("%d",&b);

for (x=a;x<=b;x++){

    sum = sum+x;

}

printf("Sum = %d",sum);

return 0;
}
