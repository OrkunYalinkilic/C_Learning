#include <stdio.h>
#include <stdlib.h>
int usAl(int t,int u)
{
    int sonuc;
    if(t==0)
    {
        return 0;
    }
    else if(u==0)
    {
        return 1 ;
    }
    else if(t==1)
    {
        return 1;
    }

    else
    {
        sonuc=t*usAl(t,u-1);
    }
    return sonuc;
}
int main()
{
    int taban,us;
    printf("Taban: ");
    scanf("%d",&taban);
    printf("Us: ");
    scanf("%d",&us);
    printf("Sonuc: %d ",usAl(taban,us));
    return 0;
}
