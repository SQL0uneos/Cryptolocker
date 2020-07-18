#include "menu.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define TS 93
#define MODE_CRYPT 1
#define MODE_DECRYPT 2

// Fonction cryptage de chaine

char *DecryptageChaineInv(char *chaine)
{

    // print et reverse via

    char *inverse;
    inverse = strrev(chaine);

    return inverse;
}

void DecryptageCesar(char str[], int shift)
{

  int k = 0;
  int i =0;
  int d = 0;
  int j=shift;

for(i;i<strlen(str);i++)
{
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    {

    //printf("Pour n : %d le texte est %s : ", i, str[i]);

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
            //printf("%c", str[i]);
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
            printf("%c", str[i]);

        }
    }

  }
    //printf("\n");

    }

printf("la chaine est: %s \n",str);

}



void decrypttestVig()
{
char Message[100];
char Cle [100];
char Filtre [100] = "" ;
char MsgCode[100] = "" ;
char Tableau[TS] [TS] = {'a','b','c','d','e','f','g','h', 'i','j','k','l','m','n','o','p', 'q','r','s','t','u','v','w','x', 'y','z',' ','A','B','C','D','E', 'F','G','H','I','J','K','L','M', 'N','O','P','Q','R','S','T','U', 'V','W','X','Y','Z','0','1','2', '3','4','5','6','7','8','9','0', ',',';',':','!','?','.','/','*', '$','(',')','[',']','{','}','_', '-','°','@','%','<','>','\'','é', 'è','"','à','+','='} ;
unsigned int i, j, k ;
unsigned int select ;

// On remplit le tableau
for( i = 1 ; i < TS ; i ++ )
for( j = 0 ; j < TS ; j ++ )
Tableau[ i ] [ j ] = Tableau[ 0 ] [ (i + j) % TS ] ;



while( 1 )
{

printf( "\n\nQue voulez-vous faire ? :\n"
"1...Crypter une chaine.\n"
"2...Decrypter une chaine.\n"
"0...Quitter.\n" ) ;

select = 3 ;

while( select > 2 )
{
printf( "\nVotre choix ? : " ) ;
scanf( "%d", &select ) ;
}

if( select )
{
printf( "Entrez un message : " ) ;

fflush(stdin);

if(select == MODE_CRYPT)
gets(Message) ;
else
gets(MsgCode) ;

printf( "Entrez la clef : " ) ;
gets( Cle ) ;

// Copie de la clée dans Filtre
while( strlen( Filtre ) <= strlen( Message ) )
strcat( Filtre, Cle ) ;

switch( select )
{
case MODE_CRYPT :
// Codage
for( i = 0 ; i < strlen( Message ) ; i ++ )
{
// Abscisse dans j
for( j = 0 ; j < TS ; j ++ )
{
if( Message[ i ] == Tableau[ 0 ] [ j ] ) break ;
}

// Ordonnée dans k
for( k = 0 ; k < TS ; k ++ )
{
if( Filtre[ i ] == Tableau[ k ] [ 0 ] ) break ;
}

// On stock le caractère codé
MsgCode[ i ] = Tableau[ k ] [ j ] ;
}

printf( "\nMessage code : %s\n\n", MsgCode ) ;

break ;

case MODE_DECRYPT :
// Décodage
for( i = 0 ; i < strlen( MsgCode ) ; i ++ )
{
// Ordonnée dans j
for( j = 0 ; j < TS ; j ++ )
if( Filtre[ i ] == Tableau[ j ] [ 0 ] ) break ;

// Abscisse dans k
for( k = 0 ; k < TS ; k ++ )
if( MsgCode[ i ] == Tableau[ j ] [ k ] ) break ;

// On stock le caractère décodé
Message[ i ] = Tableau[ 0 ] [ k ] ;
}

printf( "\nMessage decode : %s\n\n", Message ) ;

break ;
}
} /* if select */
else
break ;
} /* while( 1 ) */

return 0 ;
}
