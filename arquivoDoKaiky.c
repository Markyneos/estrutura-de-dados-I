//Arquivo do kaiky
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *esq;
    struct no *dir;
} no;

typedef struct no *arvBin;

arvBin* criaArvore(){
    arvBin *raiz = (arvBin*)malloc(sizeof(arvBin));
    if (raiz != NULL)
        *raiz = NULL;
    return raiz;
}

void preOrdem(arvBin *raiz){
    if (raiz == NULL)
        return;
    if (*raiz != NULL){
        printf("%d ", (*raiz)->info);
        preOrdem(&((*raiz)->esq));
        preOrdem(&((*raiz)->dir));
    }
}

void emOrdem(arvBin *raiz){
    if (raiz == NULL)
        return;
    if (*raiz != NULL){
        emOrdem(&((*raiz)->esq));
        printf("%d ", (*raiz)->info);
        emOrdem(&((*raiz)->dir));
    }
}

void posOrdem(arvBin *raiz){
    if (raiz == NULL)
        return;
    if (*raiz != NULL){
        posOrdem(&((*raiz)->esq));
        posOrdem(&((*raiz)->dir));
        printf("%d ", (*raiz)->info);
    }
}

int totalNosArvore(arvBin *raiz){
    if (raiz == NULL || *raiz == NULL)
        return 0;
    int total_esq = totalNosArvore(&((*raiz)->esq));
    int total_dir = totalNosArvore(&((*raiz)->dir));
    return total_esq + total_dir+1;
}

int alturaNosArvore(arvBin *raiz){
    if (raiz == NULL || *raiz == NULL)
        return 0;
    int total_esq = alturaNosArvore(&((*raiz)->esq));
    int total_dir = alturaNosArvore(&((*raiz)->dir));
    if (total_esq > total_dir)
        return total_esq+1;
    else
        return total_dir+1;
}

int buscaNum(arvBin *raiz, int valor){
    if (raiz == NULL || *raiz == NULL)
        return 0;
    if (valor == (*raiz)->info)
        return 1;
    else{
        if (valor > (*raiz)->info){
            if((*raiz)->dir != NULL) 
                return buscaNum(&(*raiz)->dir, valor);
            else
                return 0;
        }   
        else{
            if((*raiz)->esq != NULL) 
                return buscaNum(&(*raiz)->esq, valor);
            else
                return 0;
        }
    }
}

int main()
{
    printf("Início\n");
    arvBin *raiz = criaArvore();
    
    no a,b,c,d,e,f,g,h,i;
    no *converte = &a;
    
    a.info = 80;
    a.esq = &b;
    a.dir = &c;
    b.info = 60;
    b.esq = &d;
    b.dir = &e;
    c.info = 90;
    c.esq = &f;
    c.dir = &g;
    d.info = 50;
    d.esq = NULL;
    d.dir = NULL;
    e.info = 70;
    e.esq = &h;
    e.dir = NULL;
    f.info = 85;
    f.esq = NULL;
    f.dir = NULL;
    g.info = 110;
    g.esq = &i;
    g.dir = NULL;
    h.info = 65;
    h.esq = NULL;
    h.dir = NULL;
    i.info = 100;
    i.esq = NULL;
    i.dir = NULL;
    
    raiz = &converte;
    
    printf("Pré ordem: \n");
    preOrdem(raiz);
    printf("\n");
    
    printf("Em ordem: \n");
    emOrdem(raiz);
    printf("\n");
    
    printf("Pós ordem: \n");
    posOrdem(raiz);
    printf("\n");
    
    printf("Total de nós: ");
    printf("%d", totalNosArvore(raiz));
    printf("\n");
    printf("Altura: %d", alturaNosArvore(raiz));
    
    printf("\nTentando encontrar 70: %d", buscaNum(raiz, 70));
    printf("\nTentando encontrar 63: %d", buscaNum(raiz, 63));
    printf("\nAssinado: Kaiky 😺");
    
    return 0;
}
