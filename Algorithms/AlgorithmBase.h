#ifndef ALGORITHM_BASE_H_
#define ALGORITHM_BASE_H_

#include "Grid.h"

namespace Algorithm
{
  class AlgorithmBase
  {
    public:
	  virtual ~AlgorithmBase() {};

      virtual bool runAlgorithm(Grid& puzzle) = 0;
  };
}

#endif
