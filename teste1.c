//teste de jogo da velha 25/9

#include<stdio.h>

main()
{
    int i, jogador1, jogador2, jogo[9], resultado;

    printf("Posicoes do jogo\n");
    for(i=0;i<9;i++)
    {
       jogo[i]=i+1;

       printf("%d\t", jogo[i]);

       if(i==2 || i==5)
       {
        printf("\n");
       }
    }

    printf("\n");

    while(resultado!=1 || resultado!=1)
    {
        printf("Jogador 1: ");
        scanf("%d", &jogador1);

        for(i=0;i<9;i++)
        {
            if(jogador1==jogo[i])
            {
                jogo[i]= 0;
            }
            printf("%d\t", jogo[i]);

            if(i==2 || i==5)
            {
             printf("\n");
            }
        }

        printf("\n");

        printf("Jogador 2: ");
        scanf("%d", &jogador2);

        for(i=0;i<9;i++)
        {
            if(jogador2==jogo[i])
            {
                jogo[i]= 11;
            }
            printf("%d\t", jogo[i]);

            if(i==2 || i==5)
            {
             printf("\n");
            }
        }

        printf("\n");


    }

    
}