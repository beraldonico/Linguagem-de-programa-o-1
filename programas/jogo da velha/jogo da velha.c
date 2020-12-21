#include <stdio.h>
#include <stdlib.h>

void mostra (void);
void inicio (void);
void verifica(void);
void ganhador (void);
char M[3][3]; /*matriz 3 por 3*/
int x, y, n=9, z, i, j,q ,w ,e , r;
int main()



{
inicio();
mostra();
while(n>0){
printf("Jogador 1 digite as coordenadas!\n");
scanf("%d",&z);
verifica();
printf("Jogador 2 digite as coordenadas!\n");
scanf("%d",&z);
verifica();
ganhador();

}

    return 0;
}
void mostra (void){   /*mostrar o jogo da velha na tela*/

        printf("JOGO DA VELHA!!!\n");
        printf("\n");
        printf("%c | %c | %c  || 1 | 2 | 3 \n",M[0][0],M[0][1],M[0][2]);
        printf("_________     _________\n");
        printf("%c | %c | %c  || 4 | 5 | 6 \n",M[1][0],M[1][1],M[1][2]);
        printf("_________      _________\n");
        printf("%c | %c | %c  || 7 | 8 | 9 \n",M[2][0],M[2][1],M[2][2]);
        printf("\n");
}
void inicio (void){   /*coloca os espaços em branco nas posições da matriz*/
   for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            M[x][y]=' ';
        }

    }
}

void verifica (void){

    if (n%2==0){


             if((z>=1)&&(z<=9)){

                if(z==1){

                    if((M[0][0])==' ')
                            {
                            M[0][0]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==2){

                    if((M[0][1])==' ')
                            {
                            M[0][1]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==3){

                    if((M[0][2])==' ')
                            {
                            M[0][2]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==4){

                    if((M[1][0])==' ')
                            {
                            M[1][0]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==5){

                    if((M[1][1])==' ')
                            {
                            M[1][1]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==6){

                    if((M[1][2])==' ')
                            {
                            M[1][2]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==7){

                    if((M[2][0])==' ')
                            {
                            M[2][0]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==8){

                    if((M[2][1])==' ')
                            {
                            M[2][1]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==9){

                    if((M[2][2])==' ')
                            {
                            M[2][2]='O';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }
             }
                mostra();
    }
    else {


             if((z>=1)&&(z<=9)){

                if(z==1){

                    if((M[0][0])==' ')
                            {
                            M[0][0]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==2){

                    if((M[0][1])==' ')
                            {
                            M[0][1]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==3){

                    if((M[0][2])==' ')
                            {
                            M[0][2]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==4){

                    if((M[1][0])==' ')
                            {
                            M[1][0]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==5){

                    if((M[1][1])==' ')
                            {
                            M[1][1]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==6){

                    if((M[1][2])==' ')
                            {
                            M[1][2]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==7){

                    if((M[2][0])==' ')
                            {
                            M[2][0]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==8){

                    if((M[2][1])==' ')
                            {
                            M[2][1]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }

                if(z==9){

                    if((M[2][2])==' ')
                            {
                            M[2][2]='X';
                            n--;
                            system ("cls");
                            }
                    else
                        {
                            printf("Coordenada ja ocupada, tente outra!\n");
                            scanf("%d",&z);
                            verifica();
                            system ("cls");


                        }
                }
             }
             else
             {
                 printf("Coordenada invalida! Tente novamente!\n");
                 scanf("%d", &z);
                 verifica();
                 system ("cls");

             }
    }
    mostra();
    }
    void ganhador (void){

       for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                for(q=0;q<3;q++){
                    for(w=0;w<3;w++){
                        for(e=0;e<3;e++){
                            for(r=0;r<3;r++){
                                if((i!=q) && (i!=e)&& (j!=w) && (j!=r) && (q!=e) && (w!=r)){
                                    if (M[i][j]==M[q][w]==M[e][r]){
                                        printf("ganhador");
                                    }
                                }
                            }
                        }
                    }
                }
            }
       }
}
