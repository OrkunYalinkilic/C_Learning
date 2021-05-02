#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int *pointer1;
    int *pointer2;
    printf("A dizisinin eleman sayisini giriniz:");
    scanf("%d",&a);
    int dizi_A[a];

    for(pointer1=dizi_A; pointer1<dizi_A+a; pointer1++)
    {
        printf("Eleman %d: ",pointer1-dizi_A);
        scanf("%d",pointer1);
    }

    printf("B dizisinin eleman sayisini giriniz:");
    scanf("%d",&b);
    int dizi_B[b];

    for(pointer2=dizi_B; pointer2<dizi_B+b; pointer2++)
    {
        printf("Eleman %d: ",pointer2-dizi_B);
        scanf("%d",pointer2);
    }

    printf("Dizi A: ");

    for(pointer1=dizi_A; pointer1<dizi_A+a; pointer1++)
    {
        printf("%d ",*pointer1);
    }

    printf("\nDizi B: ");

    for(pointer2=dizi_B; pointer2<dizi_B+b; pointer2++)
    {
        printf("%d ",*pointer2);
    }

    for(pointer1=dizi_A+a,pointer2=dizi_B; pointer1,pointer2<=dizi_B+b-1; pointer1++,pointer2++)
    {
        *pointer1=*pointer2;
    }

    printf("\nB dizisinin A dizisinin sonuna eklenmis hali: ");

    for(pointer1=dizi_A; pointer1<=dizi_A+a+b-1; pointer1++)
    {
        printf("%d ",*pointer1);
    }

    return 0;
}
