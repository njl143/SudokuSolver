#ifndef HIDDEN_SINGLES_H_
#define HIDDEN_SINGLES_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class HiddenSingles: public Algorithm::AlgorithmBase
  {
    public:
      HiddenSingles();
	  ~HiddenSingles();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
