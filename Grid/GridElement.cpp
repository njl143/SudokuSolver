/*
 * SudokuGridElement.cpp
 *
 *  Created on: Jun 17, 2012
 *      Author: Nathan
 */

#include "GridElement.h"

GridElement::GridElement() : value_(0),
                                         original_(false),
                                         color_(0)
{
  for (int count = 1; count <= 9; ++count)
  {
    possible_[count] = true;
  }
}

GridElement::~GridElement()
{}

unsigned int GridElement::numberOfPossibleValues()
{
  unsigned int count = 0;

  for (unsigned int counter = 1; counter <= 9; ++counter)
  {
    if (possible_[counter])
    {
      ++count;
    }
  }

  return count;
}

std::vector<unsigned int> GridElement::allPossibleValues()
{
  std::vector<unsigned int> returnVector;
  for (unsigned int counter = 1; counter <= 9; ++counter)
  {
	if (possible_[counter])
	{
	  returnVector.push_back(counter);
	}
  }

  return returnVector;
}
