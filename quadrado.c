#include "quadrado.h"
#include <math.h>

// TODO: implemente aqui as funções requeridas
void le_linha(linha *l) {
    scanf("%d %d %d %d", &(l->p[0].x), &(l->p[0].y), &(l->p[1].x), &(l->p[1].y));
    l->comprimento = sqrt(pow(((double)l->p[0].x - (double)l->p[1].x),2) + 
                          pow(((double)l->p[0].y - (double)l->p[1].y),2));
}

void le_quadrado(quadrado *q) {
    le_linha(&(q->l[0]));
    le_linha(&(q->l[1]));
    le_linha(&(q->l[2]));
    le_linha(&(q->l[3]));
}

void exibe_perimetro(quadrado *q) {
    q->comprimento = 0;
    for (int i = 0; i < 4; i++) {
        q->comprimento += q->l[i].comprimento;
    }
    printf("%.0lf", q->comprimento);
}