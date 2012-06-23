#ifndef HIDDEN_QUADS_H_
#define HIDDEN_QUADS_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class HiddenQuads: public Algorithm::AlgorithmBase
  {
    public:
      HiddenQuads();
	  ~HiddenQuads();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
