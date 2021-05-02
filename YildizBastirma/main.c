#include <stdio.h>
#include <stdlib.h>
void yildizBastir(int boy)
{
    if(boy>0)
    {
        for(int i=1; i<=boy; i++)
        {
            printf("* ");
        }
        printf("\n");
        yildizBastir(boy-1);
    }
}
int main()
{
    int n;
    printf("N sayisini giriniz: ");
    scanf("%d",&n);
    printf("\n");
    yildizBastir(n);
    return 0;
}
