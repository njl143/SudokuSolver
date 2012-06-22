export SRC_ROOT := /c/eclipse/CPPWorkspaces/SudokuSolver
export OBJ_DIR := $(SRC_ROOT)/obj
export BIN_DIR := $(SRC_ROOT)/bin
export BOOST_ROOT := /c/boost_1_49_0

export ALGORITHMS := $(SRC_ROOT)/Algorithms
export SUDOKUGRID := $(SRC_ROOT)/Grid

export CPP_INCLUDES := -g -I$(SRC_ROOT) -I$(ALGORITHMS) -I$(SUDOKUGRID) -I$(BOOST_ROOT)

all: sudokuGrid algorithms local
	$(CXX) -o$(BIN_DIR)/SudokuSolver.exe $(OBJ_DIR)/*.o -static-libgcc -static-libstdc++ 

local: $(SRC_ROOT)/*.cpp
	$(CXX) -c $(CPP_INCLUDES) $^
	mv *.o $(OBJ_DIR)/

sudokuGrid:
	$(MAKE) -f $(SUDOKUGRID)/Makefile

algorithms: sudokuGrid
	$(MAKE) -f $(ALGORITHMS)/Makefile

clean:
	rm -f $(OBJ_DIR)/*.o $(BIN_DIR)/*
