#include <stdio.h>
#include <stdlib.h>
#include "initialisation.h" // importer le fichier header( avec extension .h) initialisation.h dans le main.c
#include "afficher.h"      // importer le fichier header afficher.h dans le main.c
#include "menu.h"         // importer le fichier header menu.h dans le main.c
#include "gagnant.h"     // importer le fichier gagnant menu.h dans le main.c
#include "coordonee_valide.h"

/*
* author Abdoul Rahimi Diallo
*/

void afficher(char grille[][7]);
int EstCordonneValide(char grille[][7] );
int EstPartieGagne(char grille[][7]);
char grille[6][7]; //Le plateau du jeu avec 42 emplacements répartis en 6 lignes et 7 colonnes

int numeroJoueur =1;


int main()
{

	//int ligneCase = 0;
	int colonneCase = 0;
	int compteur = 0;
	char joueur1[20] ;
    char joueur2[20] ;
    char joueur3[20];


    FILE *fichier = NULL;
    fichier = fopen("puissance_4.docx", "a");
    menu();
    initialisationgrille(grille);
    afficher(grille);
    /*Les joueurs choisissent leurs noms*/
	printf("Nom du Joueur1 : ");
	scanf("%s", &joueur1);
        while(getchar()!='\n') ;
	printf("Nom du Joueur2 : ");
	scanf("%s",&joueur2);
	while(getchar()!='\n') ;
	printf("Nom du Joueur3 : ");
	scanf("%s",&joueur3);
	printf("\n");

	do {
		compteur++;
		afficher(grille);
		printf( "Tour du Joueur %d  \n " ,  numeroJoueur % 3 +1 );
		do {
            numeroJoueur = numeroJoueur % 3 +1;
            if (numeroJoueur == 1)
            {
                grille[0][colonneCase-1] = 'X';
            }
            else if (numeroJoueur == 2){
                grille[0][colonneCase-1] = 'O';
            }
            else {
                grille[0][colonneCase-1] = 'R';
            }

		} while (!EstCordonneValide(grille));

	} while (!EstPartieGagne(grille) && compteur != 36);

	afficher(grille);


	if(fichier==NULL)   //si le fichier est nul alors retourne un message et renvoie false.
    {
        printf("imposible d'ouvrir le fichier");
            return 0;
    }
	else
    {
        if(EstPartieGagne(grille) ) {
            fputs( "\n\n********* *RÉSULTAT  DE LA PARTIE* ************\n", fichier ) ;
            fprintf(fichier, "Joueur 1 : %s VS Joueur 2 : %s VS Joueur 3 : %s \n\n", joueur1, joueur2, joueur3);
                if(joueur1)
                {
                        printf( "Joueur 1 : %s VS Joueur 2 : %s VS Joueur 3 : %s \n", joueur1, joueur2, joueur3);
                        printf("YOUYOUUU !!!!! Le Joueur %d  a gagné la partie \n\n ", numeroJoueur ) ;
                        fprintf(fichier, "YOUYOUUU !!!!! Le Joueur %d a gagné la partie \n\n" ,numeroJoueur ); // Écriture dans le fichier
                        fclose(fichier); // On ferme le fichier qui a été ouvert
                }
        }
        else
        {
            fputs( "\n\n********* *RÉSULTAT  DE LAPARTIE* ************\n", fichier ) ;
            printf("La partie entre le joueur %s , le joueur %s et le joueur %s s'est terminé a egalité !\n\n", joueur1 , joueur2, joueur3) ;
            fprintf( fichier , " La partie entre le joueur %s , le joueur %s et le joueur %s s'est terminé a egalité ! \n\n ", joueur1 , joueur2, joueur3); // Écriture dans le fichier
            fclose(fichier);
        }

    }

    return 0;
}













