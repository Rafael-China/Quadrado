#ifndef QUADRADO_H_
#define QUADRADO_H_

typedef struct ponto {
  int x;
  int y;
} ponto;

typedef struct linha {
  ponto p[2];
  double comprimento;
} linha;

typedef struct quadrado {
  linha l[4];
  double comprimento;
} quadrado;

void le_linha(linha *l);

void le_quadrado(quadrado *q);

void exibe_perimetro(quadrado *q);

#endif