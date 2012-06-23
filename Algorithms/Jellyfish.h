#ifndef JELLYFISH_H_
#define JELLYFISH_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class Jellyfish: public Algorithm::AlgorithmBase
  {
    public:
      Jellyfish();
	  ~Jellyfish();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
