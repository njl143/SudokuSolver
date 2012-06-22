#ifndef SINGLES_H_
#define SINGLES_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class Singles: public Algorithm::AlgorithmBase
  {
    public:
      Singles();
	  ~Singles();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
