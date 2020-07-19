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
    char *buf = malloc(sizeof(char)*BUF_SIZE);
    FILE *fp = openFile(filename);
    fgets(buf, BUF_SIZE, fp);
    fclose(fp);
    return buf;
}

void writeFile(char *filename,char *chaine) {
    FILE* fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier #1\n");
        return NULL;
    }
    int i;
    puts(chaine);


    fprintf(fp, "%s", chaine);


    fclose(fp);
}
