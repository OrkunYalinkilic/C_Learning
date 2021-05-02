#include <stdio.h>
#include <stdlib.h>

int ikiye_Bolunme(int n)
{
    if(n%2==0)
    {return 1;}

    else
    {return 0;}
}

int uce_Bolunme(int n)
{
    if(n%3==0)
    {return 1;}
    else
    {return 0;}
}

int main()
{
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);

    if(ikiye_Bolunme(sayi)==1)
    {
        printf("Sayi cifttir.\n");
    }
    if(uce_Bolunme(sayi)==1)
    {
        printf("Sayi 3e tam bolunur.\n");
    }
    if(ikiye_Bolunme(sayi)==1&&uce_Bolunme(sayi)==1)
    {
        printf("Sayi 6ya tam bolunur.\n");

    }
    return 0;
}
