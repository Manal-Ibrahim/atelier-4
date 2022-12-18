 #include <iostream>
using namespace std;
class Elments ; // declaration de classe elments
class Chien ; // declaration de classe chien
class Repas ;// declaration de classe Repas
class Race { // declaration de classe Race
protected :
char specificite;
israseHybride();
Race(){ cout<<"class Race\n";
}
};
class Animal { // declaration de classe Animal
protected :
string nom;
int age;
string genre;
Animal(){ cout<<"class Animal\n";
}
};
class Chat : public Animal {// declaration de classe chat (La relation d’héritage avec classe Animal)
private :
string type;
public :
Repas * rep ; //La relation d’association
sauter();
Chat(){ cout<<"class Chat\n";
}
};
class Entraineur { // declaration de classe Entraineur
private :
string nom ;
string description ;
Chien *chn; //La relation d’association
Entraineur(){ cout<<"class Entrainteur \n";
}
};
class Chien : public Animal , public Race { // declaration de classe elments (La relation d’héritage avec Aniaml et Race)
private :
string taille ;
Entraineur * entr ;// La relation d’association
public :
ischass3();
Chien(){ cout<<"class Chien\n";
}};
class Repas { // declaration de classe Repas (composite de classe Elments)
private :
string nom ;
int heure ;
string description ;
Elments *elm; // relation de composition
public :
Chat * ch ; // La relation d’association
Repas(){ cout<<"class Repas\n";
}};
class Elments { //declaration de classe elments ( composant de classe Repas) »relation de composition
private :
string nom ;
string type ;
Elments(){ cout<<"class Elments\n";
}};
class Compitition {// declaration de classe Compitition
private :
string date ;
string nom ;
public :
int ordre ;
Compitition(){ cout<<"class Comptition\n";
}
};
