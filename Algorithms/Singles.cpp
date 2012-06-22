#include "Singles.h"

namespace Algorithm
{
  Singles::Singles()
  {
    // TODO Auto-generated constructor stub
  }

  Singles::~Singles()
  {
    // TODO Auto-generated destructor stub
  }

  bool Singles::runAlgorithm(Grid& puzzle)
  {
    bool changed = false;

    for (int row = 0; row < 9; ++row)
    {
	  for (int col = 0; col < 9; ++col)
	  {
	    if (puzzle.getElement(row,col).value_ == 0)
	    {
          if (puzzle.getElement(row,col).numberOfPossibleValues() == 0)
          {
		    puzzle.unsolveable();
		  }
		  else if (puzzle.getElement(row,col).numberOfPossibleValues() == 1)
		  {
		    puzzle.setElementValue(row, col, puzzle.getElement(row,col).allPossibleValues()[0]);
		    changed = true;
	 	  }
	    }
	  }
    }

    return changed;
  }
}
