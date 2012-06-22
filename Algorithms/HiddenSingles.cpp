#include "HiddenSingles.h"

namespace Algorithm
{
  HiddenSingles::HiddenSingles()
  {
    // TODO Auto-generated constructor stub
  }

  HiddenSingles::~HiddenSingles()
  {
    // TODO Auto-generated destructor stub
  }

  bool HiddenSingles::runAlgorithm(Grid& puzzle)
  {
	bool changed = false;

	// Check for hidden singles in each row and col
	for (int count = 0; count < 9; ++count)
	{
	  for (int value = 1; value <= 9; ++value)
	  {
	    std::vector<unsigned int> elementsWithValue = puzzle.elementsInRowWithValue(count, value);
	    if (elementsWithValue.size() == 1)
	    {
	      unsigned int col = elementsWithValue[0];

	      if (puzzle.getElement(count, col).value_ == 0)
	      {
	        puzzle.setElementValue(count, col, value);
	        changed = true;
	      }
	    }

	    elementsWithValue = puzzle.elementsInColWithValue(count, value);
	    if (elementsWithValue.size() == 1)
	    {
	      unsigned int row = elementsWithValue[0];

	      if (puzzle.getElement(row, count).value_ == 0)
	      {
	        puzzle.setElementValue(row, count, value);
	        changed = true;
	      }
	    }
	  }
	}

	return changed;
  }
}
