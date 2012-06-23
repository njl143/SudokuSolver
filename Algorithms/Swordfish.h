#ifndef SWORDFISH_H_
#define SWORDFISH_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class Swordfish: public Algorithm::AlgorithmBase
  {
    public:
      Swordfish();
	  ~Swordfish();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
