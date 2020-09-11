#include "merchant.h"
#include "vampire.h"
#include <math.h>

Merchant::Merchant(int r, int c,int ch):
  Enemy{r,c,"Merchant",ch,30,70,5,'M'}{
    hostile = false;
}


void Merchant::attackedBy(std::shared_ptr<Characters>c){
    int damage = ceil((100.0 / (100 + this->getDef()))*(c->getAtk()));
    this->setHP(-damage);
    hostile = true;
}

void Merchant::attackedBy(std::shared_ptr<Vampire>c){
    int damage = ceil((100.0 / (100 + this->getDef()))*(c->getAtk()));
    this->setHP(-damage);
    hostile = true;
}

bool Merchant::getHostile() const{
	return hostile;
}
