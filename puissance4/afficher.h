/*
*affichage de la grille du jeu Puissance 4.
*/
void afficher(char grille[][7])
{
	printf("\tC \t C \t C \t C \t C \t C \t C \n" );
	printf("\t---------------------------------------------------------\n");
	for(int i=0;i<6;i++ ) {
        printf("     L\t|");
        for( int j=0;j<7;j++)
        {
            printf(" %c\t|" , grille[i][j]);
        }
        printf("\n");
        printf("\t---------------------------------------------------------\n");
    }
    printf("\n");
}




