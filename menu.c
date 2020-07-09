#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void menu()
{
    // Déclaration des booléans
    int menu = 1;
    int choix = 0;

    // Première boucle
    while(menu == 1)
    {
        printf("Bienvenue sur le programme Cryptolocker 1997 \n");
        printf("Que voulez vous faire ? \n");
        printf("1 - Crypter un fichier \n2 - Crypter une chaine de caractere \n3 - Decrypter un fichier \n4 - Decrypter une chaine de caractere \n5 - Quitter \n");

        scanf("%d", &choix);
        if(choix == 1)
        {
            CryptageF();
        }
        else if (choix == 2)
        {
            CryptageC();
        }
        else if (choix == 3)
        {
            printf("Decryptage de fichier... \n");
            printf("Quel algorithme voulez-vous utiliser ? \n");
            printf("1 - Decryptage HTTPS\n2 - Decryptage XOR\n3 - Decryptage CESAR \n");
        }
        else if (choix == 4)
        {
            printf("Decryptage de chaine de caractère... \n");
            printf("Quel algorithme voulez-vous utiliser ? \n");
            printf("1 - Decryptage BIT\n2 - Decryptage XOR\n3 - Decryptage DECALAGE \n");
        }
        else if (choix == 5)
        {
            printf("Merci, à bientôt \n");
            menu == 0;
        }
        else
        {
            printf("Veuiller entrer un menu valide connard \n");
        }
    }
}


// Fonction de cryptage fichier
void CryptageF()
{
    int menu = 1;
    int choix;

    while(menu == 1)
    {
        printf("Cryptage de fichier... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Cryptage HTTPS\n2 - Cryptage XOR\n3 - Cryptage CESAR \n");

        scanf("%d", &choix);
        if(choix == 1)
        {
            printf("1");
        }
        else if (choix == 2)
        {
            printf("2");
        }
        else if(choix == 3)
        {
            printf("3");
        }
        else
        {
            printf("Nique ta mère");
        }
    }
}


void CryptageC()
{
    int menu = 1;
    int choix;

    while(menu == 1)
    {

        printf("Crypter une  chaine... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Cryptage simple inversion\n2 - Cryptage CESAR\n3 - Cryptage DECALAGE \n");

        scanf("%d", &choix);
        if(choix == 1)
        {
            printf("Cryptage par inversion de chaine, veuiller entrer une chaine : \n");


            cryptageChaineInv();

        }
        else if (choix == 2)
        {
            char str[10];
            char stp[] = "AZERTY";
            int numcesar;

            printf("Veuiller inserer une chaine a crypter en cesar: \n");
            scanf("%s", &str);

            cryptageCesar(stp, 10);


        }
        else if(choix == 3)
        {
            printf("Env de test");
        }
        else
        {
            printf("Nique ta mère");
        }
    }

}
