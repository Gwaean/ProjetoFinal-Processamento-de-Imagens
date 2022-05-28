/*============================================================================*/
/* MÓDULO QUE REALIZA O CÁLCULO DA DISTANCIA                                  */
/*----------------------------------------------------------------------------*/
/* Autor: Bogdan T. Nassu - nassu@dainf.ct.utfpr.edu.br                       */
/*============================================================================*/

#ifndef __TRABALHO3_H
#define __TRABALHO3_H

/*============================================================================*/

#include "imagem.h"

/*============================================================================*/
/* Função central do trabalho. */
//função para subtrair o fundo da imagem//
void subtraiFundo(Imagem* bg,Imagem* img1,Imagem* img2){
    int i,j,k,resultado[i][j][k],resultado2[i][j][k];
        for (i=0;i<2;i++){
            for (j=0;j<img1->largura;j++){
                for(k=0;k<img1->largura;k++){
                resultado*[i][j][k]=img1*[i][j][k]-bg*[i][j][k];
} }}
        for (i=0;i<2;i++){
            for (j=0;j<img2->largura;j++){
                for(k=0;k<img2->largura;k++){
                resultado2*[i][j][k]=img2*[i][j][k]-bg*[i][j][k];
} }}
}
int pretoeBranco(unsigned r,unsigned g,unsigned b,Imagem* bg,Imagem* img1,Imagem* img2){
int cor,i,j;
for (i=0;i<bg->largura;i++){
r[i]=bg[0][i][0];}
for(j=0;j<bg;j++){
g[j]=bg[1][][j];}
for(=0;<bg;++){
k[i]= bg[2][][];}
cor=0.3*r[i]+0,59*g[j]+0.11*b[k];
return cor;
}

double calculaDistancia (Imagem* bg, Imagem* img1, Imagem* img2) {


/*============================================================================*/
#endif /* __TRABALHO3_H */
