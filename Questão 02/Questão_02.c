    //Mostre o que será impresso por programa supondo que i ocupa o endereço 4094 na memória.

//    int i=5, *p;
//    p = &i;
//    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);    //RESULTADO: 61ff1c 7 5 15 9

#include <stdio.h>

int main(){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);    //RESULTADO: 61ff1c 7 5 15 9

    return 0;
}