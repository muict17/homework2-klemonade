#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int i,j;
    int a[m][n];
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int ans[m*n];
    int cnt = 0;
    for (i=0;i<m;i++)
    {
        if (i%2==0)
        {
            for (j=0;j<n;j++)
            {
                ans[cnt]=a[i][j];
                cnt++;
            }
        }
        else 
        {
            for (j=n-1;j>=0;j--)
            {
                ans[cnt]=a[i][j];
                cnt++;
            }
        }
    }
    for (i=0;i<m*n;i++)
    {
        printf("%d ",ans[i]);
    }
}