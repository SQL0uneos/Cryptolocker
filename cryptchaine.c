#include "menu.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// Fonction cryptage de chaine

char *cryptageChaineInv(char *chaine)
{

    // print et reverse via

    char *inverse;
    puts("ok1");
    printf("\n----------------\n%s\n------------------\n",chaine);
    inverse = strrev(chaine);

    puts("ok2");
    return inverse;
}

void cryptageCesar(char str[], int shift)
{

  int k = 0;
  int i =0;
  int j=shift;

  for(i;i<strlen(str);i++)
    {
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {

        if(shift > 0)
        {
            for(j = 0; j < shift; j++)
            {
                str[i]++;
                if(str[i] == 'z' + 1)
                {
                    str[i] = 'a';
                }
                if(str[i] == 'Z' +1)
                {
                    str[i] = 'A';
                }
            }
        }

        else if (shift < 0)
        {
            for(k = shift; k < 0; k++)
            {
                str[i]--;
                if(str[i] == 'a' - 1)
                {
                    str[i] = 'z';
                }
                if(str[i] == 'A' - 1)
                {
                    str[i] = 'Z';
                }
            }
    }

  }


    }

printf("la chaine est: %s \n",str);



}



void vigenere(char msg[30]){

    char key[30];
    printf("veuillez saisir votre cle!: \n");
    scanf("%s",key);

    int msgLen = strlen(msg), keyLen = strlen(key), i, j;

    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];

    //generation nouvelle cle
    for(i = 0, j = 0; i < msgLen-1; ++i, ++j){
        if(j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //cryptation
    for(i = 0; i < msgLen-1; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';

    encryptedMsg[i] = '\0';

    //decryptation
    for(i = 0; i < msgLen-1; ++i)
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';

    decryptedMsg[i] = '\0';

    printf("Le Message est: %s", msg);
    printf("\n Cle: %s", key);
    printf("\n Generation de la nouvelle cle: %s", newKey);
    printf("\n Message crypté: %s", encryptedMsg);
    printf("\n Decrypte le message: %s\n", decryptedMsg);
}









// Fonction CESAR 2

