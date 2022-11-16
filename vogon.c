#include <stdio.h>
#include <unistd.h>

int main (int argc, char **argv)
{

    int i;
    char *versos_cortados[7];
    char *versos_enteros[7];
    char *vogon[7];

    i = 1;
    versos_cortados[1] = "¡Oh!, irrinquieta ";
    versos_cortados[2] = "tus micturadones son para ";
    versos_cortados[3] = "como plurnas manchigraznas sobre una plívida ";
    versos_cortados[4] = "Groop, a ti te imploro mi gándula ";
    versos_cortados[5] = "y asperio me acolses con crujientes ";
    versos_cortados[6] = "o te rasgaré la verruguería con mi ";
    versos_enteros[1] = "¡Oh!, irrinquieta gruflebugle\n";
    versos_enteros[2] = "tus micturadones son para mí\n";
    versos_enteros[3] = "como plurnas manchigraznas sobre una plívida abeja.\n";
    versos_enteros[4] = "Groop, a ti te imploro mi gándula bolarina\n";
    versos_enteros[5] = "y asperio me acolses con crujientes ligabujas,\n";
    versos_enteros[6] = "o te rasgaré la verruguería con mi bérgano, ¡espera y verás!\n";
    vogon[1] = "eretsdf";
    vogon[2] = "ente";
    vogon[3] = "plea";
    vogon[4] = "ina";
    vogon[5] = "abuga";
    vogon[6] = ", ¡espera y verás!";


    
    if (argc < 2)
    {
        while (i < 7)
        {
             printf("%s", versos_enteros[i]);
             i++;
        }
        return(0);
    }
    else
    {
        while (i < 7)
        {
            while (i < argc && i < 7)
            {
                printf("%s%s%s\n", versos_cortados[i], argv[i],vogon[i]);
                i++;
            }
            if (i < 7)
                printf("%s", versos_enteros[i]);
            i++;
        }
        return(0);
    }
}