#include <iostream>
#include 'Vecteur.h'
using namespace std;

void Vecteur::saisir() 
{
	cin >> abscisse_ >> ordonnee_;
}

void Vecteur::afficher()
{
	cout << "(" << abscisse_ << "," << ordonnee_ << ")" << endl;
}

float Vecteur::produitscalaire(Vecteur v)
{
	float resultat;
	resultat = abscisse_ * v.abscisse_ + ordonnee_ * v.ordonnee_;
	return resultat;
}

int main()
{
	Vecteur V1;
	cout << "Veuillez saisir un vecteur V1 : " << endl;
	V1.saisir();
	Vecteur V2;
	cout << "Veuillez saisir un vecteur V2 : " << endl;
	V2.saisir();
	float resultat = V1.produitscalaire(V2);
	cout << resultat << endl;
	return 0;
}