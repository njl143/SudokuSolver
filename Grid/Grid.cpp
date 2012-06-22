#include "Grid.h"

#include <iostream>
#include <fstream>
#include <stdlib.h>

Grid::Grid() : solveable_(true)
{
  grid_.resize(9);

  std::vector<std::vector<GridElement> >::iterator outeriter = grid_.begin();
  std::vector<std::vector<GridElement> >::iterator outerend = grid_.end();

  while (outeriter != outerend)
  {
    outeriter->resize(9);

    ++outeriter;
  }
}

Grid::~Grid()
{}

void Grid::loadPuzzle(std::string inputFile)
{
  std::ifstream input(inputFile.c_str());

  if (input)
  {
    std::string line;
    unsigned int rowCount = 0;

    do
    {
      std::getline(input, line);

      for (unsigned int colCount = 0; colCount < 9; ++colCount)
      {
        unsigned int readValue = atoi(line.substr(colCount*2, 1).c_str());

        if (readValue != 0)
        {
          grid_[rowCount][colCount].original_ = true;

          for (int possibleValueCount = 1; possibleValueCount <= 9; ++possibleValueCount)
          {
        	if (possibleValueCount != readValue)
        	{
              grid_[rowCount][colCount].possible_[possibleValueCount] = false;
        	}
          }

          setElementValue(rowCount, colCount, readValue);
        }
      }

      ++rowCount;
    } while (!input.eof());
  }
}

void Grid::display()
{
  std::vector<std::vector<GridElement> >::iterator outeriter = grid_.begin();
  std::vector<std::vector<GridElement> >::iterator outerend = grid_.end();

  while (outeriter != outerend)
  {
    std::vector<GridElement>::iterator inneriter = outeriter->begin();
    std::vector<GridElement>::iterator innerend = outeriter->end();

    while (inneriter != innerend)
    {
      std::cout << inneriter->value_ << " ";

      ++inneriter;
    }

    std::cout << std::endl;

    ++outeriter;
  }
}

GridElement& Grid::getElement(unsigned int row, unsigned int col)
{
  return grid_[row][col];
}
void Grid::setElementValue(unsigned int row,
		                   unsigned int col,
		                   unsigned int value)
{
  for (int count = 0; count < 9; ++count)
  {
    if (count != row)
    {
      grid_[count][col].possible_[value] = false;
    }

    if (count != col)
    {
      grid_[row][count].possible_[value] = false;
    }
  }

  for (int subrow = row/3*3; subrow < row/3*3+3; ++subrow)
  {
    for (int subcol = col/3*3; subcol < col/3*3+3; ++subcol)
    {
      if (subrow != row || subcol != col)
      {
        grid_[subrow][subcol].possible_[value] = false;
      }
    }
  }

  grid_[row][col].value_ = value;
}

bool Grid::solved()
{
  bool solved = true;

  for (int row = 0; row < 9; ++row)
  {
    for (int col = 0; col < 9; ++col)
    {
      if (grid_[row][col].value_ == 0)
      {
        solved = false;
      }
    }
  }

  return solved;
}

bool Grid::solveable()
{
  return solveable_;
}

void Grid::unsolveable()
{
  solveable_ = false;
}

std::vector<unsigned int> Grid::elementsInRowWithValue(unsigned int row, unsigned int value)
{
  std::vector<unsigned int> elements;
  for (int col = 0; col < 9; ++col)
  {
	if (grid_[row][col].possible_[value])
	{
	  elements.push_back(col);
	}
  }

  return elements;
}

std::vector<unsigned int> Grid::elementsInColWithValue(unsigned int col, unsigned int value)
{
  std::vector<unsigned int> elements;
  for (int row = 0; row < 9; ++row)
  {
	if (grid_[row][col].possible_[value])
	{
	  elements.push_back(row);
	}
  }

  return elements;
}
