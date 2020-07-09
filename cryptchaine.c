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

      if(str[i] >= 97 &&  str[i] <= 122 || str[i] >=65 && str[i] <=90)
       {
           if (j>0)
            {
              if(str[i]+shift>122&&str[i]+shift>=97)
              {
                      str[i]+=j-26;
              }
              else if(str[i]+shift>=65&&str[i]+shift<=90)
                      {
                           str[i]+=j;
                      }
                      else
                       {
                           str[i]+=j;
                       }
            }

        else
            {
              if(str[i]+shift<=122&&str[i]+shift>=97)
              {
                      str[i]+=j;
              }
              else if(str[i]+shift>=65&&str[i]+shift<=90)
                      {
                      str[i]+=j+26;
                      }
                       else
                       {
                           str[i]+=j+26;
                       }

            }
       }

    }
    printf("chain: %s\n",str);

}






// Fonction CESAR 2

