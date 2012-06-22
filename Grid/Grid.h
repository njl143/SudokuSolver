#ifndef SUDOKU_GRID_H_
#define SUDOKU_GRID_H_

#include <string>
#include <vector>
#include "GridElement.h"

class Grid
{
  public:
    Grid();
    ~Grid();

    void loadPuzzle(std::string inputFile);
    void display();

    GridElement& getElement(unsigned int row, unsigned int col);
    void setElementValue(unsigned int row,
    		             unsigned int col,
    		             unsigned int value);

    bool solved();
    bool solveable();
    void unsolveable();

    std::vector<unsigned int> elementsInRowWithValue(unsigned int row, unsigned int value);
    std::vector<unsigned int> elementsInColWithValue(unsigned int col, unsigned int value);

  private:
    std::vector<std::vector<GridElement> > grid_;
    bool solveable_;
};


#endif
