#include <stdio.h>
#include <stdlib.h>
#define N 4

typedef struct oyuncu
{
    char isim[10];
    char soyisim[10];
    int yas;
    int seviye;
} oyuncu;

typedef struct ekip
{
    char ekip_Adi[10];
    oyuncu oyuncu_bir;
    oyuncu oyuncu_iki;
} ekip;

void oyuncu_bilgileri_al(oyuncu *oyuncuu)
{
    printf("Oyuncu Adi:");
    scanf("%s",&oyuncuu->isim);
    printf("Oyuncu Soyadi:");
    scanf("%s",&oyuncuu->soyisim);
    printf("Oyuncu Yasi:");
    scanf("%d",&oyuncuu->yas);
    printf("Oyuncu Seviyesi:");
    scanf("%d",&oyuncuu->seviye);
}

void ekip_bilgileri_al(ekip *equipe)
{
    printf("Ekibin ismini giriniz: ");
    scanf("%s",&equipe->ekip_Adi);
    printf("OYUNCU 1:\n");
    oyuncu_bilgileri_al(&equipe->oyuncu_bir);
    printf("OYUNCU 2:\n");
    oyuncu_bilgileri_al(&equipe->oyuncu_iki);
}

void ekip_bilgileri_yazdir(ekip *equipe)
{
    printf("Ekip ismi: %s\n",&equipe->ekip_Adi);
    oyuncu_bilgileri_yazdir(&equipe->oyuncu_bir,1);
    oyuncu_bilgileri_yazdir(&equipe->oyuncu_iki,2);
}

void oyuncu_bilgileri_yazdir(oyuncu *oyncu, int i)
{
    printf("\n%d.Oyuncu Bilgileri\n",i);
    printf("Oyuncu Adi:%s\n",&oyncu->isim);
    printf("Oyuncu Soyadi:%s\n ",&oyncu->soyisim);
    printf("Oyuncu Yasi:%d\n ",&oyncu->yas);
    printf("Oyuncu Seviyesi:%d\n ",&oyncu->seviye);
}

int main()
{
    ekip ekipler[N];

    for(int i=1; i<=N; i++)
    {
        printf("\n%d. EKIP\n",i);
        ekip_bilgileri_al(&ekipler[i]);
    }

    for(int i=1; i<=N; i++)
    {
        printf("\n%d. EKIP BILGILERI\n",i);
        ekip_bilgileri_yazdir(&ekipler[i]);
    }
    return 0;
}
