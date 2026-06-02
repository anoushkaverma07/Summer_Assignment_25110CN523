#include<stdio.h>
int main()
{
    int n, i=0, temp, d;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    while(n!=0)
    {
        d = n%10;
        n = n/10;
        i++;
    }
    printf("No. of digits in %d = %d",temp,i);
    return 0;
}