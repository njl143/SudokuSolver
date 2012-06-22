all: local

local: $(ALGORITHMS)/*.cpp
	$(CXX) -c $(CPP_INCLUDES) $^
	mv *.o $(OBJ_DIR)/

clean:
	rm -rf *.o
