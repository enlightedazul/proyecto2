#include <stdio.h>
#include <unistd.h>

char *uppercase(char *frase)
{
    if(*frase >='a' && *frase <='z')
    {
        *frase = (char)(*frase - 32);
    };
    return(frase);
}

int count_letras(char *frase)
{
    int i;

    i = 0;
    while(frase[i])
    {
        i++;
    }
    return(i);
}

int main (int argc, char **argv)
{
   if (argc < 2)
   {
        printf("No has escrito nada,\nY en el silencio calla\nLa verdad no terminada.\n");
        return(0);
   }
   else if (argc == 2)
   {
        if(count_letras(argv[1]) < 4)
        {
            printf("Tu palabra es muy corta\nPero eso no me importa\nPorque bailo una jota\nEn la estación de Atocha.\n*");
            return(0);
        }
        if(count_letras(argv[1]) == 4)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de cuatro.\nVamos a pasar un buen rato\nEn este anfiteatro\nEn el desafio venticuatro.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 5)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de cinco\nDe alegria estoy que brinco\nComo un grillo en un circo\nAunque sangro si me pincho.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 6)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de seis\nY os pido que voteis\nCon un cartel en francés\nHaciendo el pino del revés.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 7)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de siete\nEl niño quiere chupete\nAsí que mueve tu taburete\nMientras toco el clarinete.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 8)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de ocho\nTan larga como la nariz de Pinocho\nMientras tu botón abrocho\nDisfrutamos de un bizcocho.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 9)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de nueve\nMueve,Mueve vamos a la nieve\nDate una vuelta y vuelve\nEste poema me conmueve.\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) == 10)
        {
            argv[1] = uppercase(argv[1]);
            printf("%s es de diez\nQue perfecta lucidez\nAgasajamos al juez\nSin ser nada soez\n", argv[1]);
            return(0);
        }
        if(count_letras(argv[1]) > 10 )
        {
            printf("Tu palabra es muy larga\nY esta poesia sobrecarga\nY la vuelve muy amarga.\n");
            return(0);
        }
        
   }
   else if (argc > 2)
   {
            printf("Has escrito demasiado\nY el programa ha petado\nAsí que hemos terminado.\n");
            return(0);
   }
   
    
}