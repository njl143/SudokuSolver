#ifndef HIDDEN_TRIPLES_H_
#define HIDDEN_TRIPLES_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class HiddenTriples: public Algorithm::AlgorithmBase
  {
    public:
      HiddenTriples();
	  ~HiddenTriples();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
