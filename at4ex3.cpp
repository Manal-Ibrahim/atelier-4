#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
int a ,n;
list <int> list1; // declaration de la liste1
cout<<"entrez le nombre des entiers : " ; //le nombre des entires qui va stocke dans la liste
cin>>n;
cout << endl;
for (int i = 0; i < n; ++i) //l’ajoute des nombres entiers
{
cout<<"donnez la valeur de entier numero "<<i+1<<" : " ;
cin>>a;
list1.push_back(a); // pour ajouter les nombres au debut de la liste
}
cout<<endl;
list1.sort();// on utilise la fonction sort() pour trie la liste selon les nombres
cout<<"la liste triee est : ";
list <int> :: iterator it; // declaration de pointeur it
for(it = list1.begin(); it != list1.end(); ++it)// parcourir de la liste
cout << '\t' << *it;//l’affichage de la valeur qui existe dans pointeur it
return 0;
}