#include <stdio.h>
/*int pw(int n)
{
    int i;
    int a=1;
    for (i=0;i<3;i++)
    {
        a*=n;
    }
    return a;
}*/
int main()
{
    int n;
    scanf("%d",&n);
    int x=0;
    int tmp = n;
    int a[20];
    do
    {
        a[x] = tmp%10;
        tmp/=10;
        x++;
    } while (tmp > 0);
    int sum = 0;
    int i;
    for (i=0;i<x;i++)
    {
        sum+=(a[i]*a[i]*a[i]);
    }
    if (sum == n)
    {
        printf("Armstrong");
    }
    else 
    {
        printf("Not Armstrong");
    }
}