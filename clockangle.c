#include <stdio.h>
int main()
{
    float h,m;
    scanf("%f %f",&h,&m);
    if (h==12)
    {
        h=0;
    }
    if (m==12)
    {
        m=0;
    }
    float ah=0,am=0;
    am = 30*m;
    ah = (30*h)+(m*2.5);
    float dif = am - ah;
    if (dif<0)
    {
        dif = 0-dif;
    }
    if (dif >= 180)
    {
        dif = dif - 180;
    }
    printf("%.2f degree",dif);
}