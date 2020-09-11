#ifndef _ELF_
#define _ELF_
#include <iostream>
#include "enemy.h"

class Elf:public Enemy{


public:
  Elf(int row, int col,int chamber);
  void attack(std::shared_ptr<Characters> c)override;
};

#endif
