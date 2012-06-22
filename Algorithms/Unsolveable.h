#ifndef UNSOLVEABLE_H_
#define UNSOLVEABLE_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class Unsolveable: public Algorithm::AlgorithmBase
  {
    public:
      Unsolveable();
	  ~Unsolveable();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
