#include <stdio.h>
#include <stdlib.h>
double karekok_Hesapla (double N)
{
    double karekok;
    karekok=N/2;
    for(int i=1; i<=50; i++)
    {
        karekok=((karekok*karekok)+N)/(2*karekok);
    }
    return karekok;
}
int main()
{
    /*
    Kullanýcý tarafýndan girilen bir N pozitif tam sayýsýnýn karekökünün bulunmasýný saðlayan (sqrt() kullanmadan) C programýný
    fonksiyon kullanarak yazýnýz.(A: girilen sayi)
    K=A/2
    Karekök:Toplam 1'den 50'ye kadar .(K^2+A)/2K
    */
    double A;
    printf("Karekoku alinacak sayiyi giriniz: ");
    scanf("%lf",&A);
    printf("%.3lf sayisinin karekoku: %.3lf ",A,karekok_Hesapla(A));
    return 0;
}
