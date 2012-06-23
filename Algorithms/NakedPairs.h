#ifndef NAKED_PAIRS_H_
#define NAKED_PAIRS_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class NakedPairs: public Algorithm::AlgorithmBase
  {
    public:
      NakedPairs();
	  ~NakedPairs();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
