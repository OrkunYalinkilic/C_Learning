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
    Kullan�c� taraf�ndan girilen bir N pozitif tam say�s�n�n karek�k�n�n bulunmas�n� sa�layan (sqrt() kullanmadan) C program�n�
    fonksiyon kullanarak yaz�n�z.(A: girilen sayi)
    K=A/2
    Karek�k:Toplam 1'den 50'ye kadar .(K^2+A)/2K
    */
    double A;
    printf("Karekoku alinacak sayiyi giriniz: ");
    scanf("%lf",&A);
    printf("%.3lf sayisinin karekoku: %.3lf ",A,karekok_Hesapla(A));
    return 0;
}
