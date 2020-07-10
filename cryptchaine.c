#include "menu.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


// Fonction cryptage de chaine

void cryptageChaineInv()
{

    // print et reverse via strrev
    printf("Entrer une chaine de caractere a inverser : \n");

    char chaine[100];

    scanf("%s", &chaine);
    strrev(chaine);


    printf("Chaine inverse :  %s\n", chaine);
}

void cryptageCesar(char str[], int shift)
{

  int i =0;
  int j=shift;

  for(i;i<strlen(str);i++)
    {
if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'){

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
        for(int k = shift; k < 0; k++)
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





        //printf("chain: %s\n",str);
      printf("la chaine est:%s",str);



    }









// Fonction CESAR 2

