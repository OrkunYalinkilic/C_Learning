#include <stdio.h>
#include <stdlib.h>
#define MAX 40

cumleyi_Oku(char tab[MAX]){
    int i=0;
    scanf("%c",&tab[i]);
    while(tab[i]!='\n'&&i<MAX)
    {
    i++;
    scanf("%c",&tab[i]);
    }
}
boslugu_Kaldir(char tab[MAX]){
    for(int i=0;tab[i]!='\0';i++){
        if(tab[i]==' '){
            for(int j=i; tab[i]=' '; j++){
                    tab[i]=tab[j+1];
            }
        }
    }
}
int main()
{
    char cumle[MAX];
    printf("Lutfen bir cumle giriniz: ");
    cumleyi_Oku(cumle);
    boslugu_Kaldir(cumle);
    printf("\nDizibirlesince\n");
    for(int k=0; cumle[k]!='\0'; k++){
       printf("%c ",cumle[k]);
    }
return 0;
}
