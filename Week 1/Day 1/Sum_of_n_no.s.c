#include<stdio.h>
int main() 
{
    int n, i, sum=0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Error! Sum of n natural numbers doesn't exist.");
    }
    else
    {
        for(i=1; i<=n; i++)
        {
            sum += i;
        }
        printf("Sum of first %d natural numbers = %d", n, sum);
    }
}