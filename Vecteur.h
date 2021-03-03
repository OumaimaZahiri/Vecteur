#pragma once

class Vecteur
{
	float abscisse_;
	float ordonnee_;
public:
	Vecteur(float x = 0, float y = 0);
	float getAbscisse() { return abscisse_; }
	float getOrdonnee() { return ordonnee_; }
	void setAbscisse(float n) { numerateur_ = n }
	void setOrdonnee(float n) { denominateur_ = n }
	void saisir();
	void afficher();
	float produitscalaire(Vecteur v);
};