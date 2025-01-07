#include"functionRec.h"

long factorielle(int  n){
  if(n>1){

     return 1;
  }else{

       return n* factorielle(n-1);
  }

}

 unsigned long a(int rang , int d){

    if(rang>1){

     return d + a(rang -1 , d);
    }else {

        return -d;
    }


}

unsigned long sA(int n , int d){

    if(n == 0){
        rerurn a(0, d);
    }else {

        return sA(n-1, d) + a(n,d);
    }

}
 unsigned long sommeFactorielle(int n){

   if(n == 1){
    return 1;
   }else {
       return sommeFactorielle(n-1) + factorielle(n);
   }

 }

 double W(int n){
     if(n == 0){}

     return 3;
 }else {
    return 7/8 * W(n-1);
 }

 int S(int n){
     if(n == 0){
        return W(0);
     }else {
         return S(n-1) + W(n) ;
     }
 }

 int V(int rang){
     if(n == 0){}
     return 3 ;
 }else {
     return 1- V(rang -1 );
 }
unsigned long P(int n){

    if (n == 0 || n == 1 || n == 2){

        return 1;
    }else{

        return P(n -2) + P( n-3 );
    }


}

unsigned long sP( int nombre ){
    if(n == 0){

        return P(0);
    }else {

        return sP(n-1) + P(n);
    }


}
int calculPuissance(int X , int n){

    if(n == 0){
        return 1;
    }else {
      return X * calculPuissance(X , n-1);
    }


}

int fib(int N){
    if(N<2){
        return N;
    }else {
        return fib(N-1) + fib(N-2);
    }
}
//////////////////////////////////////////



// Fonction r�cursive pour calculer l'�l�ment de la suite de rang n
int u(int n) {
    // Cas de base : u(1) = 1
    if (n == 1) {
        return 1;
    } else {
        // Appel r�cursif : un = n * u(n-1)
        return n * u(n - 1);
    }
}

// Fonction r�cursive pour afficher les �l�ments de la suite jusqu'au rang n
void f(int n, int current) {
    // Cas de base : arr�ter la r�cursivit� lorsque le rang actuel est sup�rieur � n
    if (current > n) {
        return;
    } else {
        // Afficher l'�l�ment de la suite au rang actuel
        printf("u(%d) = %d\n", current, u(current));

        // Appel r�cursif : passer au rang suivant
        f(n, current + 1);
    }
}

int main() {
    int n;

    // Demander � l'utilisateur de saisir la valeur de n
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // V�rifier si n est valide (n > 0)
    if (n > 0) {
        // Appeler la fonction f pour afficher les �l�ments de la suite jusqu'au rang n
        f(n, 1);
    } else {
        printf("Veuillez entrer une valeur de n sup�rieure � 0.\n");
    }

    return 0;
}
//////////////////////////////////////////////////////////
#include <stdio.h>

// Fonction r�cursive pour afficher les nombres impairs inf�rieurs � n
void impairs(int n) {
    // Cas de base : arr�ter la r�cursivit� lorsque n est pair ou n <= 0
    if (n <= 0 || n % 2 == 0) {
        return;
    } else {
        // Afficher le nombre impair
        printf("%d", n);

        // Si n n'est pas le plus petit nombre impair, afficher une virgule
        if (n > 1) {
            printf(", ");
        }

        // Appel r�cursif avec le nombre impair suivant
        impairs(n - 2);
    }
}

int main() {
    int nombre;

    // Demander � l'utilisateur de saisir le nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Appeler la fonction impairs pour afficher les nombres impairs inf�rieurs � nombre
    printf("Les nombres impairs inf�rieurs � %d sont : ", nombre);
    impairs(nombre);

    return 0;
}
/////////////////////////////////////

#include <stdio.h>

// Fonction r�cursive pour calculer l'�l�ment de la suite de rang n
int T(int n) {
    // Cas de base : T0 = 1
    if (n == 0) {
        return 1;
    }
    // Cas de base : T1 = 2
    else if (n == 1) {
        return 2;
    } else {
        // Appel r�cursif : Tn = 2*Tn-1 - Tn-2
        return 2 * T(n - 1) - T(n - 2);
    }
}

// Fonction r�cursive pour afficher les �l�ments de la suite jusqu'au rang n
void f(int n, int current) {
    // Cas de base : arr�ter la r�cursivit� lorsque le rang actuel est sup�rieur � n
    if (current > n) {
        return;
    } else {
        // Afficher l'�l�ment de la suite au rang actuel
        printf("T(%d) = %d\n", current, T(current));

        // Appel r�cursif : passer au rang suivant
        f(n, current + 1);
    }
}

int main() {
    int n;

    // Demander � l'utilisateur de saisir la valeur de n
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    // V�rifier si n est valide (n >= 0)
    if (n >= 0) {
        // Appeler la fonction f pour afficher les �l�ments de la suite jusqu'au rang n
        f(n, 0);
    } else {
        printf("Veuillez entrer une valeur de n sup�rieure ou �gale � 0.\n");
    }

    return 0;
}
///////////////////////////////////////////chaine Produit

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure repr�sentant un produit
typedef struct Produit {
    int reference;
    char nom[50];
    float prix;
    struct Produit* suivant;
} Produit;

// Fonction pour afficher les informations d'un produit
void afficherProduit(Produit* produit) {
    printf("R�f�rence : %d\n", produit->reference);
    printf("Nom : %s\n", produit->nom);
    printf("Prix : %.2f\n", produit->prix);
    printf("\n");
}

// Fonction pour ins�rer un produit dans la collection
Produit* insererProduit(Produit* tete, int reference, const char* nom, float prix) {
    Produit* nouveauProduit = (Produit*)malloc(sizeof(Produit));

    if (nouveauProduit == NULL) {
        fprintf(stderr, "Erreur d'allocation m�moire.\n");
        exit(EXIT_FAILURE);
    }

    nouveauProduit->reference = reference;
    strcpy(nouveauProduit->nom, nom);
    nouveauProduit->prix = prix;
    nouveauProduit->suivant = tete;

    return nouveauProduit;
}

// Fonction pour traiter et supprimer les produits de la collection
void traiterProduits(Produit** tete) {
    while (*tete != NULL) {
        // Afficher les informations du produit
        afficherProduit(*tete);

        // Sauvegarder l'adresse du produit actuel
        Produit* produitActuel = *tete;

        // Mettre � jour la t�te de la liste
        *tete = (*tete)->suivant;

        // Lib�rer la m�moire du produit actuel
        free(produitActuel);
    }
}

int main() {
    Produit* collection = NULL; // Initialiser la collection comme une liste vide

    // Ajouter quelques produits � la collection
    collection = insererProduit(collection, 101, "Produit A", 19.99);
    collection = insererProduit(collection, 102, "Produit B", 29.99);
    collection = insererProduit(collection, 103, "Produit C", 39.99);

    // Traiter et supprimer les produits de la collection
    traiterProduits(&collection);

    return 0;
}

