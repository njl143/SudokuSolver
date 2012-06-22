#include "Unsolveable.h"

namespace Algorithm
{
  Unsolveable::Unsolveable()
  {
    // TODO Auto-generated constructor stub
  }

  Unsolveable::~Unsolveable()
  {
    // TODO Auto-generated destructor stub
  }

  bool Unsolveable::runAlgorithm(Grid& puzzle)
  {
    puzzle.unsolveable();
    puzzle.display();

    return false;
  }
}
