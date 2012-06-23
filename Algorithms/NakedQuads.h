#ifndef NAKED_QUADS_H_
#define NAKED_QUADS_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class NakedQuads: public Algorithm::AlgorithmBase
  {
    public:
      NakedQuads();
	  ~NakedQuads();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
