#include <iostream>
#include <fstream>

#include "SudokuSolver.h"

int main()
{
  SudokuSolver solver;

  solver.initiatePuzzle("SudokuSampleMedium.txt");

  std::cout << "Original Puzzle = " << std::endl << std::endl;
  solver.getOriginalPuzzle().display();

  std::cout << std::endl << std::endl;
  std::cout << "How would you like to solve the puzzle? (Input the number)" << std::endl;
  std::cout << "   1. Brute Force" << std::endl;
  std::cout << "   2. Human Logic" << std::endl << std::endl;

  unsigned int choice = 0;
  while (choice <= 0)
  {
    std::cin >> choice;

    switch (choice)
    {
      case 1:
      {
        solver.solveByBruteForce();
        break;
      }
      case 2:
      {
        if (solver.solveByLogic())
        {
          std::cout << std::endl << std::endl;
          std::vector<Grid> solutions = solver.getSolvedPuzzle();

          std::vector<Grid>::iterator solutionsIter = solutions.begin();
          std::vector<Grid>::iterator solutionsEnd = solutions.end();

          while (solutionsIter != solutionsEnd)
          {
            solutionsIter->display();
            std::cout << std::endl;
            ++solutionsIter;
          }
        }
        else
        {
          std::cout << "Solution NOT currently possible!!" << std::endl;
        }
        break;
      }
      default:
      {
        std::cout << "Invalid Input... Please input another choice" << std::endl;

        choice = 0;
        break;
      }
    }
  }

  return 0;
}
