#ifndef XYWING_H_
#define XYWING_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class XYWing: public Algorithm::AlgorithmBase
  {
    public:
      XYWing();
	  ~XYWing();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
