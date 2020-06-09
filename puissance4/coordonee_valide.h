/*
*Saisie les coordonnees du nouveau pion à mettre sur la grille
*Si les coordonnees sont en dehors de la grille ou si la case possede
deja un pion, la saisie est refusee, un message d'erreur est affichee,
et le joueur doit rejouer
*X jeton joueur 1 ; O jeton joueur 2 et R jeton joueur 3
*/

int numeroJoueur; 
int EstCordonneValide(char grille[][7])
{
int x , y;

/*
*Le joueur choisi la colonne
*/
    printf("\nChoisissez une colonne! => ");
    scanf("%d", &y);


/*Tant que la colonne choisie est pleine, le joueur
doit en choisir une autre
*/
    while((grille[0][y-1]=='X') || (grille[0][y-1]=='O')|| (grille[0][y-1]=='R'))
    {
        printf("La colonne est pleine!\n\n");
        printf("Choisissez une colonne! => ");
        scanf("%d", &y);

    }
/*
Tant que le joueur n'entre pas une colonne valide,
il doit en choisir une autre
*/
    while((y>7) || (y<0))
    {
        printf("Entrez une colonne correct!\n\n");
        printf("Choisissez une colonne! => ");
        scanf("%d", &y);

    }
/*
Verifie si la premiere case (de la derniere ligne
de la grille) est vide et choisi celle au dessus dans
le cas contraire (qui sera aussi verifiée)
*/
    for(x=6; x>=0; x--)
    {
        if(grille[x][y-1]==' '){
            if(numeroJoueur== 1){
                grille[x][y-1]= 'X';
            break;
            }
            else if(numeroJoueur== 2) {
                grille[x][y-1]='O';
            break;
            }
	    else {
                grille[x][y-1]='R';
            break;
            }

        }
    }
}

