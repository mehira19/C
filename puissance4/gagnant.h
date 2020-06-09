/*
*verifie la position gagnante
*/

int EstPartieGagne(char grille[][7])
{
/*
*HORIZONTALES
*/
	if (grille[0][0] == grille[0][1] && grille[0][0] == grille[0][2] && grille[0][0] == grille[0][3] && grille[0][0] != ' ' ||  grille[0][1] == grille[0][2] && grille[0][1] == grille[0][3] && grille[0][1] == grille[0][4] && grille[0][1] != ' ' ||  grille[0][2] == grille[0][3] && grille[0][2] == grille[0][4] && grille[0][2] == grille[0][5] && grille[0][2] != ' ' ||  grille[0][3] == grille[0][4] && grille[0][3] == grille[0][5] && grille[0][3] == grille[0][6] && grille[0][3] != ' ')
		{ return  1; }
    else if (grille[1][0] == grille[1][1] && grille[1][0] == grille[1][2] && grille[1][0] == grille[1][3] && grille[1][0] != ' ' || grille[1][1] == grille[1][2] && grille[1][1] == grille[1][3] && grille[1][1] == grille[1][4] && grille[1][1] != ' ' || grille[1][2] == grille[1][3] && grille[1][2] == grille[1][4] && grille[1][2] == grille[1][5] && grille[1][2] != ' ' || grille[1][3] == grille[1][4] && grille[1][3] == grille[1][5] && grille[1][3] == grille[1][6] && grille[1][3] != ' ')
		{ return  1; }
    else if (grille[2][0] == grille[2][1] && grille[2][0] == grille[2][2] && grille[2][0] == grille[2][3] && grille[2][0] != ' ' ||  grille[2][1] == grille[2][2] && grille[2][1] == grille[2][3] && grille[2][1] == grille[2][4] && grille[2][1] != ' ' ||  grille[2][2] == grille[2][3] && grille[2][2] == grille[2][4] && grille[2][2] == grille[2][5] && grille[2][2] != ' ' ||  grille[2][3] == grille[2][4] && grille[2][3] == grille[2][5] && grille[2][3] == grille[2][6] && grille[2][3] != ' ')
		{ return  1; }
    else if (grille[3][0] == grille[3][1] && grille[3][0] == grille[3][2] && grille[3][0] == grille[3][3] && grille[3][0] != ' ' ||  grille[3][1] == grille[3][2] && grille[3][1] == grille[3][3] && grille[3][1] == grille[3][4] && grille[3][1] != ' ' ||  grille[3][2] == grille[3][3] && grille[3][2] == grille[3][4] && grille[3][2] == grille[3][5] && grille[3][2] != ' ' ||  grille[3][3] == grille[3][4] && grille[3][3] == grille[3][5] && grille[3][3] == grille[3][6] && grille[3][3] != ' ')
		{ return  1; }
     else if (grille[4][0] == grille[4][1] && grille[4][0] == grille[4][2] && grille[4][0] == grille[4][3] && grille[4][0] != ' ' ||  grille[4][1] == grille[4][2] && grille[4][1] == grille[4][3] && grille[4][1] == grille[4][4] && grille[4][1] != ' ' ||  grille[4][2] == grille[4][3] && grille[4][2] == grille[4][4] && grille[4][2] == grille[4][5] && grille[4][2] != ' ' ||  grille[4][3] == grille[4][4] && grille[4][3] == grille[4][5] && grille[4][3] == grille[4][6] && grille[4][3] != ' ')
		{ return  1; }
     else if (grille[5][0] == grille[5][1] && grille[5][0] == grille[5][2] && grille[5][0] == grille[5][3] && grille[5][0] != ' ' ||  grille[5][1] == grille[5][2] && grille[5][1] == grille[5][3] && grille[5][1] == grille[5][4] && grille[5][1] != ' ' ||  grille[5][2] == grille[5][3] && grille[5][2] == grille[5][4] && grille[5][2] == grille[5][5] && grille[5][2] != ' ' ||  grille[5][3] == grille[5][4] && grille[5][3] == grille[5][5] && grille[5][3] == grille[5][6] && grille[5][3] != ' ')
		{ return  1; }

/*
*VERTICALES
*/
	else if (grille[0][0] == grille[1][0] && grille[0][0] == grille[2][0] && grille[0][0] == grille[3][0] && grille[0][0] != ' ' ||grille[1][0] == grille[2][0] && grille[1][0] == grille[3][0] && grille[1][0] == grille[4][0] && grille[1][0] != ' ' ||grille[2][0] == grille[3][0] && grille[2][0] == grille[4][0] && grille[2][0] == grille[5][0] && grille[2][0] != ' ')
		{ return  1; }
    else if (grille[0][1] == grille[1][1] && grille[0][1] == grille[2][1] && grille[0][1] == grille[3][1] && grille[0][1] != ' ' ||grille[1][1] == grille[2][1] && grille[1][1] == grille[3][1] && grille[1][1] == grille[4][1] && grille[1][1] != ' ' ||grille[2][1] == grille[3][1] && grille[2][1] == grille[4][1] && grille[2][1] == grille[5][1] && grille[2][1] != ' ')
		{ return  1; }
    else if (grille[0][2] == grille[1][2] && grille[0][2] == grille[2][2] && grille[0][2] == grille[3][2] && grille[0][2] != ' ' ||grille[1][2] == grille[2][2] && grille[1][2] == grille[3][2] && grille[1][2] == grille[4][2] && grille[1][2] != ' ' ||grille[2][2] == grille[3][2] && grille[2][2] == grille[4][2] && grille[2][2] == grille[5][2] && grille[2][2] != ' ')
		{ return  1; }
    else if (grille[0][3] == grille[1][3] && grille[0][3] == grille[2][3] && grille[0][3] == grille[3][3] && grille[0][3] != ' ' ||grille[1][3] == grille[2][3] && grille[1][3] == grille[3][3] && grille[1][3] == grille[4][3] && grille[1][3] != ' ' ||grille[2][3] == grille[3][3] && grille[2][3] == grille[4][3] && grille[2][3] == grille[5][3] && grille[2][3] != ' ')
		{ return  1; }
    else if (grille[0][4] == grille[1][4] && grille[0][4] == grille[2][4] && grille[0][4] == grille[3][4] && grille[0][4] != ' ' ||grille[1][4] == grille[2][4] && grille[1][4] == grille[3][4] && grille[1][4] == grille[4][4] && grille[1][4] != ' ' ||grille[2][4] == grille[3][4] && grille[2][4] == grille[4][4] && grille[2][4] == grille[5][4] && grille[2][4] != ' ')
		{ return  1; }
    else if (grille[0][5] == grille[1][5] && grille[0][5] == grille[2][5] && grille[0][5] == grille[3][5] && grille[0][5] != ' ' ||grille[1][5] == grille[2][5] && grille[1][5] == grille[3][5] && grille[1][5] == grille[4][5] && grille[1][5] != ' ' ||grille[2][5] == grille[3][5] && grille[2][5] == grille[4][5] && grille[2][5] == grille[5][5] && grille[2][5] != ' ')
		{ return  1; }
    else if (grille[0][6] == grille[1][6] && grille[0][6] == grille[2][6] && grille[0][6] == grille[3][6] && grille[0][6] != ' ' ||grille[1][6] == grille[2][6] && grille[1][6] == grille[3][6] && grille[1][6] == grille[4][6] && grille[1][6] != ' ' ||grille[2][6] == grille[3][6] && grille[2][6] == grille[4][6] && grille[2][6] == grille[5][6] && grille[2][6] != ' ')
		{ return  1; }

/*
*DIAGONALES
*/
	else if (grille[2][0] == grille[3][1] && grille[2][0] == grille[4][2] && grille[2][0] == grille[5][3] && grille[2][0] != ' ')
		{ return  1; }
	else if (grille[0][3] == grille[1][4] && grille[0][3] == grille[2][5] && grille[0][3] == grille[3][6] && grille[0][3] != ' ')
		{ return  1; }
    else if (grille[1][0] == grille[2][1] && grille[1][0] == grille[3][2] && grille[1][0] == grille[4][3] && grille[1][0] != ' ' ||  grille[2][1] == grille[3][2] && grille[2][1] == grille[4][3] && grille[2][1] == grille[5][4] && grille[2][1] != ' '  )
		{ return  1; }
    else if (grille[0][2] == grille[1][3] && grille[0][2] == grille[2][4] && grille[0][2] == grille[3][5] && grille[0][2] != ' ' ||grille[1][3] == grille[2][4] && grille[1][3] == grille[3][5] && grille[1][3] == grille[4][6] && grille[1][3] != ' ' )
		{ return  1; }
    else if (grille[0][1] == grille[1][2] && grille[0][1] == grille[2][3] && grille[0][1] == grille[3][4]  && grille[0][1] != ' ' ||grille[1][2] == grille[2][3] && grille[1][2] == grille[3][4] && grille[1][2] == grille[4][5]  && grille[1][2] != ' ' ||grille[2][3] == grille[3][4] && grille[2][3] == grille[4][5] && grille[2][3] == grille[5][6]  && grille[2][3] != ' ' )
		{ return  1; }
    else if (grille[0][0] == grille[1][1] && grille[0][0] == grille[2][2] && grille[0][0] == grille[3][3] && grille[0][0] != ' ' ||grille[1][1] == grille[2][2] && grille[1][1] == grille[3][3] && grille[1][1] == grille[4][4] && grille[1][1] != ' ' ||grille[2][2] == grille[3][3] && grille[2][2] == grille[4][4] && grille[2][2] == grille[5][5] && grille[2][2] != ' ')
		{ return  1; }
    else { return 0;  }

}

