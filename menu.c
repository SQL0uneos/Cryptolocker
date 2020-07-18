#include "menu.h"
#include "files.c"
#include <stdio.h>
#include <stdlib.h>

void CryptageFF();
void CryptageC();
void viderBuffer();

void AfficherMenu ()
{
    puts("<=================================================>");
    puts("<=======================MENU======================>");
    puts("<=================================================>");
    puts("1. Crypter un fichier");
    puts("2. Crypter une chaine de caractere");
    puts("3. Decrypter un fichier");
    puts("4. Decrypter une chaine de caractere");
    puts("5. Quitter");
    puts("<==================================================>");
}

int DemanderMenu(int min, int max)
{
    int choix;
    while (1)
    {
        if (scanf("%d", &choix) == 1 && choix >= min && choix <= max)
            break;
        else {
            puts("Choix invalide");
            scanf("%*[^\n]");
        }
    }
    return choix;
}

void ChoixMenu()
{
    int choix = DemanderMenu(1, 5);
    switch (choix)
    {
    case 1:
        CryptageFF();
        break;
    case 2:
        CryptageC();
        break;
    case 3:
        printf("Decryptage de fichier... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Decryptage HTTPS\n2 - Decryptage XOR\n3 - Decryptage CESAR \n");
        break;
    case 4:
        printf("Decryptage de chaine de caractère... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Decryptage BIT\n2 - Decryptage XOR\n3 - Decryptage DECALAGE \n");
        break;
    case 5:
        puts("Merci a bientot");
        exit(0);
        break;
    }
}

int princ()
{
    int choix;
    do {
        AfficherMenu();
        ChoixMenu();
    }
    while(choix != 5);

    return 0;
}


/*
void principal()
{

    int princi;
    if(princi=!0){
    // Déclaration des booléans
    princi = 1;
    int choix;

    // Première boucle
        switch(princi)
        {
            choix=0;
            printf("Bienvenue sur le programme Cryptolocker 1\n");
            printf("Que voulez vous faire ? \n");
            printf("1 - Crypter un fichier \n2 - Crypter une chaine de caractere \n3 - Decrypter un fichier \n4 - Decrypter une chaine de caractere \n5 - Quitter \n");
            scanf("%d", &choix);

        case 1:

                CryptageF();
                break;


        case 2:

                CryptageC();
                 break;

        case 3:

                printf("Decryptage de fichier... \n");
                printf("Quel algorithme voulez-vous utiliser ? \n");
                printf("1 - Decryptage HTTPS\n2 - Decryptage XOR\n3 - Decryptage CESAR \n");

                 break;

        case 4:

                printf("Decryptage de chaine de caractère... \n");
                printf("Quel algorithme voulez-vous utiliser ? \n");
                printf("1 - Decryptage BIT\n2 - Decryptage XOR\n3 - Decryptage DECALAGE \n");
                 break;

        case 5:
                printf("Merci a bientot \n");
                princi=0;
        default:
                printf("Veuiller entrer un menu valide connard \n");

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
    filename = malloc(sizeof(char) * 20);
    printf("fichier:");
    scanf("%s", filename);
    readFile(filename);
    while(menu == 1)
    {
        printf("Cryptage de fichier... \n");
        printf("Quel algorithme voulez-vous utiliser ? \n");
        printf("1 - Cryptage inversement\n2 - Cryptage vegner\n3 - Cryptage CESAR\n4 - precedent\n");

        scanf("%d", &choix);
        switch(choix)
        {
        case 1:

        case 2:
            printf("test2");
        case 3:

        case 4:

        case 5:

        default:
            printf("Nique ta mère");
        }
    }
}
*/
void CryptageFF()
{
    int choix;
    int numcesar;
    char *filename, *chaine, *chaine_inverse;
    filename = malloc(sizeof(char) * 20);
    printf("fichier: ");
    scanf("%s", filename);
    //*chaine_inverse = malloc(BUF_SIZE);
    chaine_inverse = cryptageChaineInv(readFile(filename));
    printf("Chaine inverse : %s\n", chaine_inverse);
//    puts("Crypter une  chaine...");
//    puts("Quel algorithme voulez-vous utiliser ?");
//    puts("1. Cryptage simple inversion");
//    puts("2. Cryptage ROT13");
//    puts("3. Cryptage de vignère");
//    choix = DemanderMenu(1, 3);
//    switch(choix)
//    {
//        case 1:
//            chaine_inverse = cryptageChaineInv(chaine);
//            printf("Chaine inverse : %s\n", chaine_inverse);
//            break;
//        case 2:
//            puts("Veuiller  entrer le decalage souhaite: ");
//            scanf("%d", &numcesar);
//            cryptageCesar(chaine, numcesar);
//            break;
//        case 3:
//            vigenere();
//            break;
//    }
}

/*void CryptageC()
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


            char *chaine = malloc(BUF_SIZE);
            char *chaine_inverse = malloc(BUF_SIZE);

            //scanf("%s", chaine);

            fgets(chaine, BUF_SIZE, stdin);
                //printf("%s avant inverse\n", chaine);
            printf("Chaine :  %s\n", chaine);

            chaine_inverse = cryptageChaineInv(chaine);
            printf("Chaine inverse :  %s\n", chaine_inverse);
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
*/

void CryptageC()
{
    int choix;
    char str[BUF_SIZE];
    int numcesar;
    char *chaine = malloc(BUF_SIZE);
    char *chaine_inverse = malloc(BUF_SIZE);
    puts("Crypter une  chaine...");
    puts("Quel algorithme voulez-vous utiliser ?");
    puts("1. Cryptage simple inversion");
    puts("2. Cryptage ROT13");
    puts("3. Cryptage de vignère");
    choix = DemanderMenu(1, 3);
    switch(choix)
    {
        case 1:
            printf("Cryptage par inversion de chaine, veuiller entrer une chaine : \n");
            printf("Entrer une chaine de caractere a inverser : \n");

            viderBuffer();
            fgets(str, BUF_SIZE, stdin);
            chaine_inverse = cryptageChaineInv(str);
            printf("Chaine inverse : %s\n", chaine_inverse);
            break;
        case 2:
            puts("Veuiller  entrer le decalage souhaite: ");
            scanf("%d", &numcesar);
            puts("Veuiller inserer une chaine a crypter en cesar: ");
            getchar();
            fgets(str, BUF_SIZE, stdin);
            cryptageCesar(str, numcesar);
            break;
        case 3:
            puts("Veuiller inserer une chaine a crypter en vegenere: ");
            getchar();
            fgets(str, BUF_SIZE, stdin);
            vigenere(str);
            break;
    }
    char *file;
    puts("fichier de sauvegarde: ");
    scanf("%s", &file);
    printf("%s",&file);
    writeFile(&file,str);
}
