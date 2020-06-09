#include <stdio.h>
#include <stdlib.h>

int main()

{
FILE *fichier=NULL;
char titre[300];
char auteur[300];
int annee; int nombrelivre=20;
int i; int tableau[i];
fichier=fopen("test.txt", "a");

if(fichier==NULL)
 {
        printf("imposible d'ouvrir le fichier");
        exit(0);
    }
fputs("donnez des renseignements",fichier);
fclose(fichier);
for (i=0 ;i<=20; i++)
    {
       fprintf(fichier, "donnez le 1er titre:%s",titre );
       fscanf(fichier, "%s",tableau[0]);
       fclose(fichier);

    }
    return 0;
}
