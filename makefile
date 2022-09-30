APP = ./app
BIN = ./bin
INCLUDE = ./src/include
OBJ = ./obj
SRC = ./src

all:
	gcc -c $(SRC)/Hour.c -I $(INCLUDE) -o $(OBJ)/Hour.o
	gcc -c $(SRC)/Date.c -I $(INCLUDE) -o $(OBJ)/Date.o
	gcc -c $(SRC)/Appointment.c -I $(INCLUDE) -o $(OBJ)/Appointment.o
	gcc -c $(SRC)/appointmentlist.c -I $(INCLUDE) -o $(OBJ)/appointmentlist.o
	gcc -c $(SRC)/teacher.c -I $(INCLUDE) -o $(OBJ)/teacher.o
	gcc -c $(SRC)/schedule.c -I $(INCLUDE) -o $(OBJ)/schedule.o
	gcc -c $(SRC)/listSchedule.c -I $(INCLUDE) -o $(OBJ)/listSchedule.o
	gcc -c $(SRC)/HandlesFiles.c -I $(INCLUDE) -o $(OBJ)/HandlesFiles.o
	gcc $(APP)/main.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main 
	gcc $(APP)/main.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/main.exe

teste:
	gcc $(APP)/teste.c $(OBJ)/*.o -I $(INCLUDE) -o $(BIN)/teste

runTeste:
	$(BIN)/teste

run:
	$(BIN)/main

runExe:
	$(BIN)/main.exe

clean:
	rm $(OBJ)/*.o
	rm $(BIN)/*