#include <stdio.h>
#include <stdlib.h>

typedef enum {oc,su,ma,ni,may,ha,te,ag,ey,ek,ka,ar} aylar;
void ay_goster(aylar ay){

switch(ay){

case 1:{
printf("OCAK");
break;
}

case 2:{
printf("SUBAT");
break;
}
case 3:{
printf("MART");
break;
}
case 4:{
printf("NISAN");
break;
}
case 5:{
printf("MAYIS");
break;
}
case 6:{
printf("HAZIRAN");
break;
}
case 7:{
printf("TEMMUZ");
break;
}
case 8:{
printf("AGUSTOS");
break;
}
case 9:{
printf("EYLUL");
break;
}
case 10:{
printf("EKIM");
break;
}

case 11:{
printf("KASIM");
break;
}
case 12:{
printf("ARALIK");
break;
}

default: {
printf("Boyle bir ay bulunamamaktadir.");
}
}

}




int main()
{

    aylar can=te;
    int x=13;
    int y=2;

    ay_goster(can);
    printf("\n");
    ay_goster(x);
    printf("\n");
    ay_goster(y);
    printf("\n");


    return 0;
}
