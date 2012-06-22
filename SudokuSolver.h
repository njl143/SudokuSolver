#ifndef SUDOKU_SOLVER_H_
#define SUDOKU_SOLVER_H_

#include "Grid.h"
#include <string>

class SudokuSolver
{
  public:
    SudokuSolver();
    ~SudokuSolver();

    void initiatePuzzle(std::string inputFile);

    bool solveByBruteForce();
    bool solveByLogic();

    Grid& getOriginalPuzzle();
    std::vector<Grid>& getSolvedPuzzle();

  private:
    Grid originalPuzzle_;
    Grid workingPuzzle_;
    std::vector<Grid> solvedPuzzle_;
};

#endif
