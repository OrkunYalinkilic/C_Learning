#include <stdio.h>
#include <stdlib.h>

int ikiKuvvetleri(int sayi)
{
    int deger;
    if(sayi==0)
    {
        deger=1;
    }
    else
    {
        deger=2*ikiKuvvetleri(sayi-1);// burada eðer ikiKuvvetleri fonksiyonu çaðýrýlmadýysa deger=2 olarak kabul ediliyo ve 2 satýr altta o þekilde yazdýrýyor.
    }
    printf("%d ",deger);
    return deger; // (ölü) void oldugu zaman hata verdiði için int yaptýk ve ölü olarak kullanmadýgýmýz return deger dedik.
}
int main()
{
    int sayi;
    printf("Kaca kadar 2'nin kuvvetlerini listelemek istersiniz: ");
    scanf("%d",&sayi);
    ikiKuvvetleri(sayi);
    return 0;
}
