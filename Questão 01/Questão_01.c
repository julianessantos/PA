    //Seja o seguinte trecho de programa:
//    int i=3, j=5;
//    int *p, *q;
//    p = &i;
//    q = &j;

    //Determine o valor das seguintes expressões:
//    p == &i;          RESULTADO: 1
//    *p - *q;          RESULTADO: -2
//    **&p;             RESULTADO: 3
//    3 - *p/(*q)+7     RESULTADO: 10

#include <stdio.h>

int main(){
    int i=3, j=5;
    int *p, *q, a,b,c,d;
    p = &i;
    q = &j;

    a = p == &i;            
    b = *p - *q;            
    c = **&p;               
    d = 3 - *p/(*q) + 7;    

    printf("QUESTAO 1:\n 'p == &i' = %d\n '*p - *q' = %d\n '**&p' = %d\n '3 - *p/(*q) + 7' = %d\n", a,b,c,d);

    return 0;
}
