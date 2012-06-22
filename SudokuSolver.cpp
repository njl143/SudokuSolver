#include "SudokuSolver.h"
#include "AlgorithmBase.h"
#include "Singles.h"
#include "HiddenSingles.h"
#include "Unsolveable.h"
#include <iostream>
#include <boost/shared_ptr.hpp>

SudokuSolver::SudokuSolver()
{}

SudokuSolver::~SudokuSolver()
{}

void SudokuSolver::initiatePuzzle(std::string inputFile)
{
  originalPuzzle_.loadPuzzle(inputFile.c_str());
}

bool SudokuSolver::solveByBruteForce()
{
  std::cout << std::endl << std::endl << "Solving Sudoku by Brute Force" << std::endl;
  return false;
}

bool SudokuSolver::solveByLogic()
{
  std::cout << std::endl << std::endl << "Solving Sudoku by Logic" << std::endl;
  workingPuzzle_ = originalPuzzle_;

  std::vector<boost::shared_ptr<Algorithm::AlgorithmBase> > algorithms;
  algorithms.push_back(boost::shared_ptr<Algorithm::AlgorithmBase>(new Algorithm::Singles));
  algorithms.push_back(boost::shared_ptr<Algorithm::AlgorithmBase>(new Algorithm::HiddenSingles));
  algorithms.push_back(boost::shared_ptr<Algorithm::AlgorithmBase>(new Algorithm::Unsolveable));

  while (!workingPuzzle_.solved() && workingPuzzle_.solveable())
  {
    std::vector<boost::shared_ptr<Algorithm::AlgorithmBase> >::iterator iter = algorithms.begin();
    std::vector<boost::shared_ptr<Algorithm::AlgorithmBase> >::iterator end = algorithms.end();

    while (iter != end && !(*iter)->runAlgorithm(workingPuzzle_))
    {
      ++iter;
    }
  }

  if (workingPuzzle_.solved())
  {
    solvedPuzzle_.push_back(workingPuzzle_);
  }

  return workingPuzzle_.solveable();
}

Grid& SudokuSolver::getOriginalPuzzle()
{
  return originalPuzzle_;
}

std::vector<Grid>& SudokuSolver::getSolvedPuzzle()
{
  return solvedPuzzle_;
}

