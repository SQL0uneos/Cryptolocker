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
  int i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i]<= 'Z')
    {
        char c = str[i] - 'A';
        c += shift;
        c = c % 26;
        str[i] = c + 'A';
    }
    i++;
  }

  printf("%s", str);

}



// Fonction CESAR 2

void alphaRotate(char* str, int n){


// Parcourir le tableau

int i = 0;
int j = 0;
int k = 0;

for (i = 0; i < strlen(str); i++)
{

  if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
  {

    if(n > 0)
    {
        for(j = 0; j < n; j++)
        {

            str[i]++;
            if(str[i] == 'z' + 1)
            {
                str[i] = 'a';
            }
            if(str[​‍﻿​​​﻿‌﻿i] == 'Z' + 1)
            {
                str[i] = 'A';
            }
        }
    }

    else if (n < 0)
    {
        for(k = n; k < 0; k++)
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

}




