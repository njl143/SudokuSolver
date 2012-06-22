#ifndef SUDOKU_GRID_ELEMENT_H_
#define SUDOKU_GRID_ELEMENT_H_

#include <vector>

class GridElement
{
  public:
	GridElement();
	~GridElement();

	unsigned int numberOfPossibleValues();
	std::vector<unsigned int> allPossibleValues();

    unsigned int value_;
    bool possible_[10];
    bool original_;
    unsigned int color_;
};


#endif /* SUDOKUGRIDELEMENT_H_ */
