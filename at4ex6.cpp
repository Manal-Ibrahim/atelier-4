#include <iostream>
#include <exception>
using namespace std;
class Test{
public:
static int tableau[] ;
public :
static int division(int indice, int diviseur){
if(diviseur == 0 && (indice<0 || indice>9)) //si le diviseur egale 0 et l’indice inferieure à 0 et superieure à 9 va afficher l’erreur suivant
throw "Division par zero !!  indice invalide";
else if (diviseur == 0 )// si le diviseur egale 0 et l’indice entre 0 et 9 va afficher l’erreur suivant
throw "Division par zero !!";
else if(indice<0 || indice>9) //si l’indice inferieure à 0 et superieure à 9 et le diviseur différant de zero va afficher l’erreur suivant
throw "l'indice invalide";
return tableau[indice]/diviseur;
}
};
int Test::tableau[] = {17, 12, 15, 38, 29, 157, 89, -22, 0, 5} ;
int main()
{
int x, y;
cout << "Entrez l'indice de l'entier a diviser: " << endl;
cin >> x ;
cout << "Entrez le diviseur: " << endl;
cin >> y ;
// si on a aucun erreur va afficher le resultat de division
try{
cout << "Le resultat de la division est: "<< endl<<Test::division(x,y) <<endl;
} // si on a un erreur va afficher le message correspondant de cet erreur
catch(const char* msg){
cerr<<msg;
}
return 0;
}