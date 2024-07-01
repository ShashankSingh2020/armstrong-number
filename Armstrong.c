#include<stdio.h>
#include<math.h>
int countDigits(int number)
{
int count=0;
while (number!=0)
{
    number= number/10;
    count++;
}
return count;
}
int calculateSum(int number , int count)
{
int sum=0;
int temp=number;
while (temp!=0)
{
    int digit= temp % 10;
    sum+=pow(digit,count);
    temp/=10;
}
return sum;
}
int main(int argc, char const *argv[])
{
    int number;
    printf("Enter any number\n", number);
    scanf("%d",&number);
    int numOfDigits=countDigits(number);
    int sum=calculateSum(number, numOfDigits);
    if (number==sum)
    {
        printf("Entered number is armstrong number");
    }
    else
    printf("Entered number is not armstrong number");

    return 0;
}
    
