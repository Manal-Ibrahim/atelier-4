#include <iostream>
#include <set>
#include <iterator>
using namespace std;
bool recherche(int a , set<int, greater<int > > set2){ // declaration de fonction recherche de type booleen
set<int, greater<int> >::iterator it; // declaration de l’iterator
for(it = set2.begin(); it != set2.end(); ++it){ // parcourir de set
if (*it == a) { return true ; }// si l’iterator trouve la valeur de recherche , la fonction renvoie 1 sinon renvoie 0
}
}
int main (){
int a ,n;
set<int, greater<int> > entier; // declaration de la set
for (int i=1 ; i<=100 ; ++i) // remplir la set par tous les entiers de 1 a 100.
{
entier.insert(i) ;// pour ajouter chaque (i) ;
}
cout<<endl;
cout<<"Entrez la valeur que vous recherchez :\n ";// saisir la valeur de recherche
cin>> a;
if ( recherche(a,entier)== true) //l’appele de la fonction recherche , si cette fonction returne true alors la valeur existe
cout<<"la valeur existe";
else cout<< "la valeur n'exixte pas";// sinon n’existe pas
return 0;
}