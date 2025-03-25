#include<stdio.h>

main()
{
    int JogadaJogador1, JogadaJogador2, jogo[3][3], resultado, i, j, numeros=0, z;

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
    scanf("%c", &iniciar);

    do{
        for (z = 0; z < 10; z ++){
            if( z % 2 == 0)
            {
                printf("%s começa:\n", Jogador1);
                for (i = 0; i < 3; i ++){
                    for (j = 0; j < 3; j ++){
                        printf("%d \t", jogo[i][j]);
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
            }

            else{
                for (i = 0; i < 3; i ++){
                    for (j = 0; j < 3; j ++){
                        printf("%d \t", jogo[i][j]);
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
            }
        }
    }while (iniciar == 'G');

}