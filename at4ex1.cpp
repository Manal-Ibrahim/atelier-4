#include<iostream>
using namespace std;
class complexe { // declaration de classe complexe
float re;
float im;
public :
//declaration de constructeur de deux parametre
complexe(float re=0 , float im =0) : re(re), im(im){ }
//redefinition de operateur (+) + creation de reference de type complexe
complexe operator+( const complexe & x){
complexe S ; //creation d’objet
S.re =re+x.re;
S.im =im+x.im;
cout<<S.re<<" +i "<< S.im ;//la forme d’affichage ( re + i im )
}
//redefinition de operateur (-)
complexe operator-( const complexe & x){
complexe St ;
St.re =re-x.re;
St.im =im-x.im;
cout<<St.re<<" i + "<< St.im ;
}
//redefinition de operateur (/)
complexe operator/( const complexe & x){
complexe D ;
D.re =re/x.re;
D.im =im/x.im;
cout<<D.re<<" i + "<< D.im ;
}
//redefinition de operateur (*)
complexe operator*( const complexe & x){
complexe P;
P.re =re*x.re;
P.im =im*x.im;
cout<<P.re<<" i + "<< P.im ;
}};
int main (){
float a , b , c , d;
//Initialisation de variables
cout<<"entrez la partie reelle de premier nombre : " ;
cin>>a;
cout<<"entrez la partie imaginaire de premier nombre : " ;
cin>>b;
cout<<endl;
cout<<"entrez la partie reelle de deuxieme nombre : ";
cin>>c;
cout<<"entrez la partie imaginaire de deuxieme nombre : " ;
cin>>d;
cout<<endl;
complexe N1(a,b);//creation d’objet N1 de deux parametre (partie reele et partie imaginnaire de premier nombre complexe)
complexe N2(c,d); //creation d’objet N2 de deux parametre (partie reele et partie imaginnaire de deuxieme nombre complexe)
cout<< "la somme de ces nombres complexes est : " ; N1+N2; //l’appelle d’operation + pour fait la somme de ces nombres complexes
cout<<endl;
cout<< "le produit de ces nombres complexes est : " ; N1*N2; //l’appelle d’operation x
cout<<endl,
cout<< "la soustraction de ces nombres complexes est : " ; N1-N2; //l’appelle d’operation -
cout<<endl,
cout<< "la devision de ces nombres complexes est : " ; N1/N2; //l’appelle d’operation /
return 0 ;
}