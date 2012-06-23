#ifndef HIDDEN_PAIRS_H_
#define HIDDEN_PAIRS_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class HiddenPairs: public Algorithm::AlgorithmBase
  {
    public:
      HiddenPairs();
	  ~HiddenPairs();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
