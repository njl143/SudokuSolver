#ifndef NAKED_TRIPLES_H_
#define NAKED_TRIPLES_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class NakedTriples: public Algorithm::AlgorithmBase
  {
    public:
      NakedTriples();
	  ~NakedTriples();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
