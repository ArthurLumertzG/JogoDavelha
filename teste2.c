#include<stdio.h>

int main()
{
    int JogadaJogador1, JogadaJogador2, jogo[3][3], resultado, i, j, numeros=0, z, UltimaJogada;

    char Jogador1[20], Jogador2[20], iniciar;

    //recebe nomes
    printf("Jogo da velha\n");
    printf("Digite o nome do Jogador 1: ");
    fflush(stdin);
    gets(Jogador1);
    printf("Agora o nome do Jogador 2: ");
    fflush(stdin);
    gets(Jogador2);

    //da numero as posicoes
    //imprime as posicoes 
    printf("Vamos ao jogo\n");
    printf("Posicoes do jogo:\n");

    for (i = 0; i < 3; i ++){
        for (j = 0; j < 3; j ++){
            numeros ++;
            jogo[i][j] = numeros;
            printf("%d \t", jogo[i][j]);
        }
        printf("\n");
    }

    printf("Pressione G para iniciar:\n");
    scanf(" %c", &iniciar);

    do{
        //analisar se jogo ja acabou
        //sao 4 possibildades
        for( i = 0; i < 3; i ++){
            if( (jogo[i][0] == jogo[i][1] && jogo[i][1]  == jogo[i][2])  //confere colunas 
                || 
                (jogo[0][i] == jogo[1][i] && jogo[1][i] == jogo[2][i]) //confere linhas
                || 
                (jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2]) // confere diagonal, casa superior esquerda para inferior direita
                || 
                (jogo[2][0] == jogo[1][1] && jogo[1][1] == jogo[0][2])) //confere diagonal, casa superior direita para inferior esquerda
                {
                    resultado = UltimaJogada;

                    //termina o jogo
                    if(resultado == 1){
                        printf("Jogador 1 venceu, parabéns %s.", Jogador1);
                        break;
                    }

                    else if(resultado == 2){
                        printf("Jogador 2 venceu, parabéns %s.", Jogador2);
                        break;
                    }

                }
            else{
                for (z = 0; z < 10; z ++){
                    //segue o jogo
                    if( z % 2 == 0){
                        for (i = 0; i < 3; i ++){
                            for (j = 0; j < 3; j ++){
                                if( jogo[i][j] == 11){
                                    printf("X\t");
                                }
                                else if( jogo[i][j] == 22){
                                    printf("O\t");
                                }
                                else{
                                    printf("%d \t", jogo[i][j]);
                                }
                            }
                            printf("\n");
                        }
                        printf("Deseja jogar em qual casa %s?", Jogador1);
                        scanf("%d", &JogadaJogador1);
                        for (i = 0; i < 3; i ++){
                            for (j = 0; j < 3; j ++){
                            if( JogadaJogador1 == jogo[i][j]){
                                jogo[i][j] = 11;
                            }
                            }
                        }
                        UltimaJogada = 1;
                    }
        
                else{
                    for (i = 0; i < 3; i ++){
                        for (j = 0; j < 3; j ++){
                            if( jogo[i][j] == 11){
                                printf("X\t");
                            }
                            else if( jogo[i][j] == 22){
                                printf("O\t");
                            }
                            else{
                                printf("%d \t", jogo[i][j]);
                            }
                            
                        }
                        printf("\n");
                    }
                    printf("Deseja jogar em qual casa %s?", Jogador2);
                    scanf("%d", &JogadaJogador2);
                    for (i = 0; i < 3; i ++){
                        for (j = 0; j < 3; j ++){
                            if( JogadaJogador2 == jogo[i][j]){
                            jogo[i][j] = 22;
                            }
                        }
                    }
                    UltimaJogada = 2;
                }  
                
                }
            }
        }
        
        
    }while (iniciar == 'G');

    return 0;

}
