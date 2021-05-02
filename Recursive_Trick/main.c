#include <stdio.h>
#include <stdlib.h>

int carpim(int birinci,int ikinci)
{
    if(birinci==1)  // Recursive foksiyonlarda ana trick budur.
    {
        return ikinci;
    }
    else
    {
        return ikinci+ carpim(birinci-1, ikinci);
    }
}
int main()
{
    int x,y;
    printf("Iki sayi giriniz: ");
    scanf("%d%d",&x,&y);
    printf("\n%d*%d=%d",x,y,carpim(x,y));
    return 0;
}
