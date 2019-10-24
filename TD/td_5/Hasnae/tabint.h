#ifndef _TABINT_H
#define _TABINT_H


struct tabint {
    int N;  // Taille du tableau
    int *T; // Pointeur vers le tableau
};
typedef struct tabint TABINT;


TABINT gen_alea_tabint (int N, int K);
void sup_tabint (TABINT T);

void aff_tabint (TABINT T);

//utiliser ech_tabint avec i < T.N-1 ( psq on echange entre i et i+1)
void ech_tabint (TABINT T, int i);
void scan_ech_tabint (TABINT T, int fin);

void fusionner (TABINT T, int deb, int mil, int fin);

int verif_si_tableau_croissant (TABINT T); 

#endif