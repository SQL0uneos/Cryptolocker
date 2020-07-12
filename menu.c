#include "menu.h"
#include "files.c"
#include <stdio.h>
#include <stdlib.h>

void principal()
{

    int princi;
    if(princi=!0){
    // Déclaration des booléans
    princi = 1;
    int choix;

    // Première boucle
        while(princi == 1)
        {
            choix=0;
            printf("Bienvenue sur le programme Cryptolocker 1\n");
            printf("Que voulez vous faire ? \n");
            printf("1 - Crypter un fichier \n2 - Crypter une chaine de caractere \n3 - Decrypter un fichier \n4 - Decrypter une chaine de caractere \n5 - Quitter \n");
            scanf("%d", &choix);

            if(choix == 1 )
            {
                CryptageF();
                break;
            }
            else if (choix == 2)
            {
                CryptageC();
                 break;
            }
            else if (choix == 3)
            {
                printf("Decryptage de fichier... \n");
                printf("Quel algorithme voulez-vous utiliser ? \n");
                printf("1 - Decryptage HTTPS\n2 - Decryptage XOR\n3 - Decryptage CESAR \n");

                 break;
            }
            else if (choix == 4)
            {
                printf("Decryptage de chaine de caractère... \n");
                printf("Quel algorithme voulez-vous utiliser ? \n");
                printf("1 - Decryptage BIT\n2 - Decryptage XOR\n3 - Decryptage DECALAGE \n");
                 break;
            }
            else if (choix == 5)
            {
                printf("Merci a bientot \n");
                princi=0;

            }
            else
            {
                printf("Veuiller entrer un menu valide connard \n");
            }
        }
    }
    else
    {
        printf("fin du programme \n");
    }
}


// Fonction de cryptage fichier
void CryptageF()
{
    int menu = 1;
    int choix;
    char *filename;
    filename = malloc(sizeof(char*) * 20);
    printf("fichier:");
    scanf("%s", &filename);
    readFile(filename);

        printf("Cryptage de fichier... \n");

    while(menu == 1)
    {
        printf("Cryptage de fichier... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Cryptage inversement\n2 - Cryptage vegner\n3 - Cryptage CESAR\n4 - precedent\n");

        scanf("%d", &choix);
        if(choix == 1)
        {
            printf("test1");
        }
        else if (choix == 2)
        {
            printf("test2");
        }
        else if(choix == 3)
        {
            printf("test3");
        }
        else if(choix == 4)
        {
            return principal();

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
        printf("1 - Cryptage simple inversion\n2 - Cryptage ROT13\n3 - Cryptage de vignère \n");

        scanf("%d", &choix);
        if(choix == 1)
        {
            printf("Cryptage par inversion de chaine, veuiller entrer une chaine : \n");
            printf("Entrer une chaine de caractere a inverser : \n");

            char chaine[100];

            scanf("%s", &chaine);

            cryptageChaineInv(chaine);

        }
        else if (choix == 2)
        {
            char str[20];
            //char stp[] = "AZERTY";
            int numcesar;

            printf("Veuiller  entrer le decalage souhaite: \n");

            scanf("%d", &numcesar);


            printf("Veuiller inserer une chaine a crypter en cesar: ");

            getchar();
            fgets(str,20,stdin);



            cryptageCesar(str,numcesar);

            break;
        }
        else if(choix == 3)

        {
           vigenere();

        }
        else
        {
            printf("Nique ta mère");
        }
    }

}


