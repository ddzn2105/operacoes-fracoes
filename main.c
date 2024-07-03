#include <stdio.h>
#include <stdlib.h>
float minimo(float y1,float y2){
    int a=y1;
    int b=y2;
    int r;
    while (b != 0){
       r = a % b;
       a = b;
       b = r;}
   return (y1*y2)/a;
}

void maiorFracao(float x1,float y1,float x2,float y2){
    float frac1,frac2;
    int rx,ry,igual=0;
    frac1=x1/y1;
    frac2=x2/y2;
    if(frac1>frac2){
        rx=x1;
        ry=y1;
    }
    else if(frac2>frac1){
        rx=x2;
        ry=y2;
    }
    else igual=1;
    printf("-------------------------------------------\n");
    if(igual==0) printf("A MAIOR FRACAO É: \n\t %d\n\t----\n\t %d\n",rx,ry);
    else printf("\nAS DUAS FRACOES POSSUEM VALORES IGUAIS\n\n");
    printf("-------------------------------------------\n");
}

void subtrai(float x1,float y1,float x2,float y2){
    int ry,rx;
    float mmc= minimo(y1,y2);
    if(y1==y2){
        rx=x1-x2;
        ry=y1;
    }
    else{
        rx=(mmc/y1)*x1 - (mmc/y2)*x2;
        ry=mmc;
    }
    printf("-------------------------------------------\n");
    printf("SUBTRACAO: \n\t %d\n\t----\n\t %d\n",rx,ry);
    printf("-------------------------------------------\n");
}

void adiciona(float x1,float y1,float x2,float y2){
    int ry,rx;
    int mmc= minimo(y1,y2);
    if(y1==y2){
        rx=x1+x2;
        ry=y1;
    }
    else{
        rx=(mmc/y1)*x1 + (mmc/y2)*x2;
        ry=mmc;
    }
    printf("-------------------------------------------\n");
    printf("ADICAO: \n\t %d\n\t----\n\t %d\n",rx,ry);
    printf("-------------------------------------------\n");
}

void inverte(float x,float y){
    int aux=x;
    int rx=y;
    int ry=aux;
    printf("-------------------------------------------\n");
    if(ry==0) printf("\nFRACAO INVERTIDA: Nao foi possivel inverter pois nenhum número pode ser divido por 0\n");
    else printf("FRACAO INVERTIDA: \n\t %d\n\t----\n\t %d\n",rx,ry);
    printf("\n-------------------------------------------\n");
}

void tipoFracao(float x,float y){
    x=(int)x;
    y=(int)y;
    
    printf("-------------------------------------------\n");
    if(x<y){
    printf("\nTipo da Fracao: Propria\n");
    }
    else if(x>=y){
    printf("\nTipo da Fracao: Impropria\n");
    }
    printf("\n-------------------------------------------\n");
}

void multiplica(float x1,float y1,float x2,float y2){
    int rx=x1*x2;
    int ry=y1*y2;
    printf("-------------------------------------------\n");
    printf("MULTIPLICACAO: \n\t %d\n\t----\n\t %d\n",rx,ry);
    printf("-------------------------------------------\n");
}
void divide(float x1,float y1,float x2,float y2){
    int rx=x1*y2;
    int ry=y1*x2;
    printf("-------------------------------------------\n");
    printf("DIVISAO: \n\t %d\n\t----\n\t %d\n",rx,ry);
    printf("-------------------------------------------\n");
}

int isint(float num){
     return (int)num == num;
}

int main()
{   
    // ler a primeira fracao

   float x1,y1;
   int rx1,rx2,rx3,rx4;
   printf("Digite o numerador da primeira fraçao: ");
   scanf("%f", &x1);
    while(isint(x1)!=1){
        printf("Digite um numero inteiro!\n");
        printf("Digite o numerador da primeira fraçao: ");
        scanf("%f", &x1);
    }
   printf("Digite o denominador da primeira fraçao: ");
   scanf("%f", &y1);
    while(isint(y1)!=1 || y1==0){
        printf("Digite um numero inteiro e diferente de 0!\n");
        printf("Digite o denominador da primeira fraçao: ");
        scanf("%f", &y1);
    }
    printf("-------------------------------------------\n");
    // ler a segunda fracao
    
    float x2,y2;
   printf("Digite o numerador da segunda fraçao: ");
   scanf("%f", &x2);
    while(isint(x2)!=1){
        printf("Digite um numero inteiro!\n");
        printf("Digite o numerador da segunda fraçao: ");
        scanf("%f", &x2);
    }
   printf("Digite o denominador da segunda fraçao: ");
   scanf("%f", &y2);
    while(isint(y2)!=1 || y2==0){
        printf("Digite um numero inteiro e diferente de 0!\n");
        printf("Digite o denominador da segunda fraçao: ");
        scanf("%f", &y2);
    }
    printf("-------------------------------------------\n");
    int opc=0,opcfrac,multi;
    while(opc!=-1){
        printf("\tOPERACOES COM FRACOES\n");
        printf("1 para multiplicar as duas fraçoes\n2 para dividir as duas fraçoes\n3 para multiplicar uma das fraçoes por um numero inteiro\n4 para determinar se uma das fraçoes é própria ou imprópria\n5 para inverter uma das duas fraçoes\n6 para somar as duas funcoes\n7 para subtrair as duas funcoes\n8 para determinar qual das duas fraçoes é maior\n9 para digitar um novo par de fraçoes\n-1 para encerrar o programa\n");
        printf("\nDigite uma opçao: ");
        scanf("%d", &opc);
        if(opc==1){
            multiplica(x1,y1,x2,y2);
        }
        else if(opc==2){
            divide(x1,y1,x2,y2);
        }
        else if(opc==3){
            printf("\n1 para multiplicar a primeira fraçao\n2 para multiplicar a segunda fraçao\n");
            printf("\nDigite uma opçao: ");
            scanf("%d", &opcfrac);
            printf("\nDigite um número inteiro para multiplicar a fraçao: ");
            scanf("%d", &multi);
            if(opcfrac==1){
                multiplica(x1,y1,multi,multi);
            }
            else if(opcfrac==2){
                multiplica(x2,y2,multi,multi);
            }
        }
         else if(opc==4){
            printf("\n1 para saber o tipo da primeira fraçao\n2 para saber o tipo da segunda fraçao\n");
            printf("\nDigite uma opçao: ");
            scanf("%d", &opcfrac);
            if(opcfrac==1){
                tipoFracao(x1,y1);
            }
            else if(opcfrac==2){
                tipoFracao(x2,y2);
            }
         }
         else if(opc==5){
            printf("\n1 para inverter a primeira fraçao\n2 para inverter a segunda fraçao\n");
            printf("\nDigite uma opçao: ");
            scanf("%d", &opcfrac);
            if(opcfrac==1){
                inverte(x1,y1);
            }
            else if(opcfrac==2){
                inverte(x2,y2);
            }
         }
         else if(opc==6){
             adiciona(x1,y1,x2,y2);
         }
         else if(opc==7){
             subtrai(x1,y1,x2,y2);
         }
         else if(opc==8){
             maiorFracao(x1,y1,x2,y2);
         }
         else if(opc==9){
             printf("Digite o numerador da primeira fraçao: ");
               scanf("%f", &x1);
                while(isint(x1)!=1){
                    printf("Digite um numero inteiro!\n");
                    printf("Digite o numerador da primeira fraçao: ");
                    scanf("%f", &x1);
                }
               printf("Digite o denominador da primeira fraçao: ");
               scanf("%f", &y1);
                while(isint(y1)!=1 || y1==0){
                    printf("Digite um numero inteiro e diferente de 0!\n");
                    printf("Digite o denominador da primeira fraçao: ");
                    scanf("%f", &y1);
                }
                printf("-------------------------------------------\n");
                // ler a segunda fracao
                
                float x2,y2;
               printf("Digite o numerador da segunda fraçao: ");
               scanf("%f", &x2);
                while(isint(x2)!=1){
                    printf("Digite um numero inteiro!\n");
                    printf("Digite o numerador da segunda fraçao: ");
                    scanf("%f", &x2);
                }
               printf("Digite o denominador da segunda fraçao: ");
               scanf("%f", &y2);
                while(isint(y2)!=1 || y2==0){
                    printf("Digite um numero inteiro e diferente de 0!\n");
                    printf("Digite o denominador da segunda fraçao: ");
                    scanf("%f", &y2);
                }
                printf("-------------------------------------------\n");
                     }
                }
}




