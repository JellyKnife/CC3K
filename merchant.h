#ifndef _MERCHANT_
#define _MERCHANT_
#include <iostream>
#include "enemy.h"

class Merchant:public Enemy{
  bool hostile;


public:
  Merchant(int row, int col,int chamber);
  void attackedBy(std::shared_ptr<Characters> c) override;
  void attackedBy(std::shared_ptr<Vampire> c) override;
  bool getHostile() const;
};

#endif
