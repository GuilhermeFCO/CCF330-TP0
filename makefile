APP = ./app
BIN = ./bin
INCLUDE = ./src/include
OBJ = ./obj
SRC = ./src

all:
	gcc -c $(SRC)/frame.c -I $(INCLUDE) -o $(OBJ)/frame.o
	gcc $(APP)/main.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main

test:
	gcc $(APP)/test.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/test

runTest:
	$(BIN)/test

run:
	$(BIN)/main

runExe:
	$(BIN)/main.exe

clean:
	rm $(OBJ)/*.o
	rm $(BIN)/*