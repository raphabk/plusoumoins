#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

    int nombreUtilisateur =0, nombreMystere =0;
    int const MIN = 1;
    int nombreMaximum = 0;
    int choixNiveau;
    int compteur = 1;
    int continuerPartie = 1;

do
{
    printf("Choisissez le niveau 1 2 ou 3.\n");
    scanf("%d", &choixNiveau);

   /*switch (choixNiveau)
    {
    case 1:
        nombreMaximum = 100;
        break;
    case 2:
        nombreMaximum = 1000;
        break;
    case 3:
        nombreMaximum = 10000;
        break;
    default:
        printf("Ce niveau n'existe pas.");
        return 0;
        break;
    }*/


    if (choixNiveau == 1)
    {
        nombreMaximum = 100;
    }
    else if (choixNiveau == 2)
    {
        nombreMaximum = 1000;
    }
    else if (choixNiveau == 3)
    {
        nombreMaximum = 10000;
    }
    else
    {
        printf("Ce niveau n'existe pas...");
        return 0;
    }


    printf("Le nombre maximum est %d\n\n", nombreMaximum);




         srand(time(NULL));
         nombreMystere = (rand()% (nombreMaximum - MIN +1))+ MIN;

    do
    {


        printf("Quel est le nombre ?\n");
        scanf("%d", &nombreUtilisateur);

        if(nombreUtilisateur < nombreMystere)

                printf("C'est plus !\n\n");

        else if (nombreUtilisateur > nombreMystere)

                printf("C'est moins !\n\n");

        else

                printf("Bravo, vous avez trouve le nombre mystere en %d coups !!!\n\n", compteur);

            compteur++;


        } while(nombreMystere!=nombreUtilisateur);
        printf("Voulez-vous faire une nouvelle partie ?\n 1 pour oui 0 pour non.");
        scanf("%d", &continuerPartie);
        compteur = 1;
    } while(continuerPartie != 0);


        return 0;
    }
