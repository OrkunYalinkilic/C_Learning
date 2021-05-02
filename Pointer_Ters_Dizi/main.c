#include <stdio.h>
#include <stdlib.h>

//Diziyi tersten yazdirma programi.
int main()
{
    int n,*point1,*point2,sanal;

    printf("Dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);

    int dizi[n];

    for(point1=dizi; point1<dizi+n; point1++)
    {
        printf("Eleman giriniz: ");
        scanf("%d",point1);
    }

    printf("\nDizimizin ilk hali: ");

    for(point1=dizi; point1<dizi+n; point1++)
    {
        printf("%d ",*point1);
    }

    /*for(point2=dizi; *point2; point2++); // point2'nin icinde bir deger olana kadar gider...
    point2--; //Su an point2 son elemani gosteriyor..*/

    for( point1=dizi,point2=dizi+n-1;  point1<point2;  point1++,point2--)
    {
        sanal=*point1;
        *point1=*point2;
        *point2=sanal;
    }

    printf("\nDizimizin ters hali: ");

    for(point1=dizi; point1<dizi+n; point1++)
    {
        printf("%d ",*point1);
    }

    return 0;
}
