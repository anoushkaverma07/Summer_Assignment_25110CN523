#include<stdio.h>
int main()
{
    int n, i , sum=0, temp, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n!=0)
    {
        d = n%10;
        sum+=d;
        n = n/10;
    }
    printf("The sum of digits of %d = %d",n,sum);
    return 0;
}