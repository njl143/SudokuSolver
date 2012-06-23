#ifndef LOCKED_CANDIDATES_H_
#define LOCKED_CANDIDATES_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class LockedCandidates: public Algorithm::AlgorithmBase
  {
    public:
      LockedCandidates();
	  ~LockedCandidates();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
