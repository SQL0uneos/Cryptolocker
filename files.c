#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 256

void viderBuffer(void)
{
	int c;
	while ((c = getchar()) != '\n' && c != EOF) { }
}

typedef char Chaine[32];

FILE *openFile(char *filename) {
    FILE* fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier #1\n");
        return NULL;
    }
    return fp;
}


char *readFile(char *filename) {
    char buf[BUF_SIZE];
    char string[BUF_SIZE];
    FILE *fp = openFile(filename);
    printf("[AFFICHAGE DU FICHIER] : \n");
    while (fgets(buf, BUF_SIZE, fp)) {
        strcat(string, buf);
    }
    fclose(fp);
    printf(string);
    return string;
}

void writeFile(char *filename,char *chaine) {
    FILE* fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier #1\n");
        return NULL;
    }
    int i;

    for(i=0; i<strlen(chaine); i++) {
        fprintf(fp, "%s", &chaine[i]);
    }

    fclose(fp);
}
