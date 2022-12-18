#include <iostream>
#include <string>
using namespace std;
int main(){
string chaine;
cout<<" entrez votre chaine : ";
cin>>chaine;
if ( chaine.length() != 12 ) // pour tester la longeur de la chaine de caractere
cout << "cette Chaine invalide" << endl;// va afficher cette message si la longeur de la chaine differant de 12
else{
cout<<"\n la chaine de caractere represente la date du : \t";
if(chaine.substr(0,2)=="01"){ 
    cout<< chaine.substr(0,2)<<"er";}
    //si les deux premiers nombres de la chaine egaux 01 va afficher 01er
else 
cout<< chaine.substr(0,2) <<""; } 
//sinon va afficher deux premiers nombres de la chaine avec eme
if(chaine.substr(2,1)=="0") {  // si le troisieme nombre agale 0 va entrer dans le syntaxe au dessous (le premier nombre de mois)
//pour savoir le nom de mois va tester le quatrieme nombre de la chaine et selon le nombre va afficher le // mois correspondant
if(chaine.substr(3,1)=="1"){cout<<" Janvier "; }
else if(chaine.substr(3,1)=="2"){cout<<" fevrier " ;}
else if(chaine.substr(3,1)=="3"){cout<<" Mars "; }
else if(chaine.substr(3,1)=="4"){cout<<" Avril "; }
else if(chaine.substr(3,1)=="5"){cout<<" Mai "; }
else if(chaine.substr(3,1)=="6"){cout<<" Juin "; }
else if(chaine.substr(3,1)=="7"){cout<<" Juillet "; }
else if(chaine.substr(3,1)=="8"){cout<<" Aout "; }
else if(chaine.substr(3,1)=="9"){cout<<" Septembre "; }}

else if(chaine.substr(2,1)=="1"){     // si sinon; le troisieme nombre egale 1
 if(chaine.substr(3,1)=="0"){cout<<" Octobre "; }
 else if(chaine.substr(3,1)=="1"){cout<<" Novembre "; }
 else if(chaine.substr(3,1)=="2"){cout<<" Decembre "; }
}
cout<<chaine.substr(4,4) << " a115 ";//pour afficher les quatre nombres qui sont existe apres le quatrieme nombre(l’annee )
cout <<chaine.substr(8,2) << "h" << chaine.substr(10,2);//pour afficher l’heure et les minutes

return 0 ;
}