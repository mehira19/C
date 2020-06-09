#include <stdio.h>
#include <stdlib.h>

void afficher(char grille[][3]);
int EstCordonneValide(char grille[][3] , int x , int y);
int EstPartieGagne(char grille[][3]);
char grille[3][3];


/*
* Initialise la grille du morpion a vide
*/
void initialisationgrille(char grille[3][3])
{
	for (int i=0 ; i < 3; i++)
	 {
		for (int j=0; j < 3; j++)
		{
			grille[i][j] = ' ' ;
		}
	}
}


int main()
{
	int numeroJoueur = 1;
	int ligneCase = 0;
	int colonneCase = 0;
	int compteur = 0;
	char joueur1[20] ;
    char joueur2[20] ;


    FILE *fichier = NULL;
    fichier = fopen("morpion.txt", "a");

	printf("            ****** Bienvenue dans le jeu du Morpion ******\n\n");
    printf("La règle est simple, vous devez reussir à aligner 3 croix ou ronds.\n");
    printf("Le premier joueur à aligner une suite de 3 symboles, horizontalement ou diagonalement. !! GAGNE. !!\n");
    printf("\n\n");

    initialisationgrille(grille);
    afficher(grille);

    printf("Joueur 1 : Entrez votre prenom \n");
    scanf("%s",&joueur1);
    while(getchar()!='\n') ;
    printf("Joueur 2 : Entrez votre prenom \n");
    scanf("%s",&joueur2);
    printf("\n");

	do {
		compteur++;
		afficher(grille);
		printf( "Tour du Joueur %d  \n " ,  numeroJoueur );
		do {
			printf("Choisissez la ligne de la case   : ") ;
			scanf("%d", &ligneCase) ;
			printf("Choisissez la colonne de la case : ") ;
			scanf("%d", &colonneCase) ;

		} while (!EstCordonneValide(grille,ligneCase,colonneCase));

		if (numeroJoueur == 1)
		{
			grille[ligneCase-1][colonneCase-1] = 'X';
        }
		else {
			grille[ligneCase-1][colonneCase-1] = 'O';
        }

		numeroJoueur = numeroJoueur % 2 + 1;


	} while (!EstPartieGagne(grille) && compteur != 9);

	afficher(grille);


	numeroJoueur = numeroJoueur % 2 + 1;

	if(fichier==NULL)   //si le fichier est nul alors retourne un message et renvoie false.
    {
        printf("imposible d'ouvrir le fichier");
            return 0;
    }
	else
    {
        if(EstPartieGagne(grille) ) {
            fputs( "\n\n**********NOUVELE PARTIE*************\n", fichier ) ;
            fprintf(fichier, "Joueur 1 : %s VS Joueur 2 : %s\n", joueur1, joueur2);
                if (joueur1)
                {
                        printf("YOUYOUUU !!!!! Le Joueur %d  a gagné la partie \n\n ", numeroJoueur ) ;
                        fprintf(fichier, "YOUYOUUU !!!!! Le Joueur %d a gagné la partie \n\n" ,numeroJoueur ); // Écriture dans le fichier
                        fclose(fichier); // On ferme le fichier qui a été ouvert
                }
        }
        else
        {
            fputs( "\n\n**********PARTIE*************\n", fichier ) ;
            printf("La partie entre le joueur %s et le joueur %s s'est terminé a egalite !\n\n", joueur1 , joueur2) ;
            fprintf(fichier, "La partie entre le joueur %s et le joueur %s s'est terminé a egalite ! \n\n " , joueur1 , joueur2 ); // Écriture dans le fichier
            fclose(fichier);
        }

    }

    return 0;
}

/*
 *affichage la grille du morpion
 */

void afficher(char grille[3][3])
{
	printf("-------------------------\n");
	for(int i=0;i<3;i++)
        {
            printf("|");
            for( int j=0;j<3;j++)
            {
                printf("%c\t|" , grille[i][j]);
            }
            printf("\n");
            printf("-------------------------\n");
        }
}



/*
  *Saisie les coordonnees du nouveau pion à mettre sur la grille
  *Si les coordonnees sont en dehors de la grille ou si la case possede
  deja un pion, la saisie est refusee, un message d'erreur est affichee,
  et le joueur doit rejouer
  *X pion joueur 1 et O pion joueur 2
 */
int EstCordonneValide(char grille[][3], int x, int y)
{
	if (x <= 3 && x >= 1 && y <= 3 && y >= 1)
	{
		if (grille[x - 1][y - 1] != ' ')
		{
			printf("la case est deja pleine !\n\n  ")  ;
        }
		else
		{
			return 1;
        }
    }
	else
	{
		printf("Les coordonees sont Invalides ! \n\n  ")  ;
    }

	return 0;
}

int EstPartieGagne(char grille[][3])
{
	if (grille[0][0] == grille[0][1] && grille[0][0] == grille[0][2] && grille[0][0] != ' ')		//Ligne 1
		{ return  1; }
	else if (grille[1][0] == grille[1][1] && grille[1][0] == grille[1][2] && grille[1][0] != ' ') //Ligne 2
        { return  1; }
	else if (grille[2][0] == grille[2][1] && grille[2][0] == grille[2][2] && grille[2][0] != ' ') //Ligne 3
		{ return  1; }
	else if (grille[0][0] == grille[1][0] && grille[0][0] == grille[2][0] && grille[0][0] != ' ') // colonne 1
		{ return  1; }
	else if (grille[0][1] == grille[1][1] && grille[0][1] == grille[2][1] && grille[0][1] != ' ')  // colonne 2
		{ return  1; }
	else if (grille[0][2] == grille[1][2] && grille[0][2] == grille[2][2] && grille[0][2] != ' ')  // colonne 3
		{ return  1; }
	else if (grille[0][0] == grille[1][1] && grille[0][0] == grille[2][2] && grille[0][0] != ' ') // Diagonale 1
		{ return  1; }
	else if (grille[0][2] == grille[1][1] && grille[0][2] == grille[2][0] && grille[0][2] != ' ') // Diagonale 2
		{ return  1; }
    else { return 0;  }

}










