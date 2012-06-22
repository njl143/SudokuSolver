#ifndef BRUTEFORCE_H_
#define BRUTEFORCE_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class BruteForce: public Algorithm::AlgorithmBase
  {
    public:
      BruteForce();
	  ~BruteForce();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
