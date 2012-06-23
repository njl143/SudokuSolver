#ifndef XWING_H_
#define XWING_H_

#include "AlgorithmBase.h"

namespace Algorithm
{
  class XWing: public Algorithm::AlgorithmBase
  {
    public:
      XWing();
	  ~XWing();

	  bool runAlgorithm(Grid& puzzle);
  };
}

#endif
