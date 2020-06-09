/*
* Initialise la grille du jeu à vide
*/
void initialisationgrille(char grille[][7])
{
	for (int i=0 ; i < 6; i++)
	 {
		for (int j=0; j < 7; j++)
		{
			grille[i][j] = ' ' ;
		}
	}
}
