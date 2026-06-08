/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faudinet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 14:25:09 by faudinet          #+#    #+#             */
/*   Updated: 2021/09/12 15:18:46 by faudinet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


// Fonction d'affichage
void affichage (int grille[4][4])
{
    for (int i=0; i<4; i++)
    {
        for (int j=0; j<4; j++)
        {
            printf("%d", grille[i][j]);
        }
    }
    puts("\n\n");
}

bool absentSurLigne (int k, int grille[4][4], int i)
{
    for (int j=0; j < 4; j++)
        if (grille[i][j] == k)
            return false;
    return true;
}

bool absentSurColonne (int k, int grille[4][4], int j)
{
    for (int i=0; i < 4; i++)
        if (grille[i][j] == k)
            return false;
    return true;
}
bool estValide (int grille[4][4], int position)
{
    if (position == 4*4)
        return true;

    int i = position/4, j = position%4;

    if (grille[i][j] != 0)
        return estValide(grille, position+1);

    for (int k=1; k <= 4; k++)
    {
        if (absentSurLigne(k,grille,i) && absentSurColonne(k,grille,j))
        {
            grille[i][j] = k;

            if ( estValide (grille, position+1) )
                return true;
        }
    }
    grille[i][j] = 0;

    return false;
}

int main (void)
{
    int grille[4][4] =
    {
        {0,0,0,4},
        {0,3,4,1},
        {0,4,0,0},
        {0,0,3,0},
    };

    printf("Grille avant\n");
    affichage(grille);

    estValide(grille,0);

    printf("Grille apres\n");
    affichage(grille);
}
