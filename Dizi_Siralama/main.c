#include <stdio.h>
#include <stdlib.h>

Sirali(int A[],int adet)
{
    int sanal;
    for(int j=0; j<adet-1; j++)
    {
        for(int i=0; i<adet-1-j; i++)  // önce tamamýna bakacak.Sonra 1 eksiðine sonra onunda
        {                              // bir eksiðine bakacak. Dizinin sonuna kadar devam edecek.
            if(A[i]>A[i+1])
            {
                sanal=A[i];
                A[i]=A[i+1];
                A[i+1]=sanal;
            }
        }
    }
    for(int m=0; m<adet-1; m++)
    {
        printf("%3d",A[m]);
    }
}
int main()
{
    int n;
    printf("Lutfen dizinin eleman sayisini giriniz: ");
    scanf("%d",&n);
    int dizi[n];
    srand(time(0));
    for(int i=0; i<n; i++)
    {
        dizi[i]=rand()%100;
        printf("%3d",dizi[i]);
    }
    printf("\nDizinin sirali hali\n");
    Sirali(dizi,n);
    return 0;
}
