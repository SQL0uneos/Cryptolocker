#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 30

typedef char Chaine[32];

FILE *openFile(char *filename) {
    FILE* fp = fopen(&filename, "r");
    if (fp == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier #1\n");
        return NULL;
    }
    return fp;
}


void readFile(const char *filename) {
    char buf[BUF_SIZE];
    FILE *fp = openFile(filename);

    printf("[AFFICHAGE DU FICHIER] : \n");
    while (fgets(buf, BUF_SIZE, fp)) {
        printf(buf);
    }

    fclose(fp);
}

void writeFile(const char *filename) {
    FILE *fp = openFile(filename);

    Chaine str;
    int i, n;
    printf("\nCombien de ligne voulez-vous ajouter ?\n");
    scanf("%d", &n);

    printf("Que voulez-vous ajouter ?\n");
    for(i=0; i<n; i++) {
        scanf("%s", str);
        fprintf(fp, "%s\n", str);
    }

    fclose(fp);
}
