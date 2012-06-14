all: local
	$(CXX) -oSudokuSolver.exe *.o -static-libgcc -static-libstdc++ 

local: *.cpp
	$(CXX) -c $^

clean:
	rm -f *.o SudokuSolver.exe
