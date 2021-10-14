#include <stdio.h>
#include <stdlib.h>

int main()
{
    //initiaons
    int val;
    float val2;
    int signe;
    float mantisse;
    int exposant;
    float exp;

    //Demande d'ajouter les valeurs
    printf("Entrez la valeur à convertir (chiffre avant virgule : ");
    scanf("%i",&val);
   // printf("Entrez la valeur à convertir (chiffre après virgules :");
   // scanf("%f",val2);


    //Definis si le signe est positif ou négatif
    /*if(val>0){
        signe=signe;
    }
    else{
        signe++;
    }*/


    //conversion de val en binaire
    int tab[10],i;

      for(i=0; val > 0; i++)
  {
    tab[i] = val%2;
    val = val/2;
  }

  printf("Le nombre binaire est = ");

  for(i=i-1; i >= 0; i--)
  {
    printf("%d",tab[i]);
  }

    //calcul de l'exposant    int t[50], = val;
    int z[50] ;
    int j = 0;
    while(val>0){
        z[j]=val%10;
        val=val/10;
        j++;
    }
    printf("\n val =%i",&j);

}


