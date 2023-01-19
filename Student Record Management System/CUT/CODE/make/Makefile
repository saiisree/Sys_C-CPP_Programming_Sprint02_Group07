BIN = /home/saisree/Student_Record_Management_System/CUT/CODE/bin
INC = /home/saisree/Student_Record_Management_System/CUT/CODE/include
SRC = /home/saisree/Student_Record_Management_System/CUT/CODE/src
OBJ = /home/saisree/Student_Record_Management_System/CUT/CODE/obj


CFLAGS = -c -g -Wall
LFLAGS = -o
GCC = g++
CVFLAGS = -Wall -c -g
IFLAGS = -I $(INC)


all : $(BIN)/student


$(OBJ)/student_client.o : $(SRC)/student_client.cpp
        $(GCC) $(CFLAGS) $(SRC)/student_client.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj


$(OBJ)/admin_def.o : $(SRC)/admin_def.cpp
        $(GCC) $(CFLAGS) $(SRC)/admin_def.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj


$(OBJ)/add_delete.o : $(SRC)/add_delete.cpp
        $(GCC) $(CFLAGS) $(SRC)/add_delete.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj


$(OBJ)/modify_search.o : $(SRC)/modify_search.cpp
        $(GCC) $(CFLAGS) $(SRC)/modify_search.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj

$(OBJ)/display.o : $(SRC)/display.cpp
        $(GCC) $(CFLAGS) $(SRC)/display.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj


$(OBJ)/validation_def.o : $(SRC)/validation_def.cpp
        $(GCC) $(CFLAGS) $(SRC)/validation_def.cpp $(IFLAGS)
        mv *.o /home/saisree/Student_Record_Management_System/CUT/CODE/obj


$(BIN)/student : $(OBJ)/student_client.o $(OBJ)/admin_def.o $(OBJ)/add_delete.o $(OBJ)/modify_search.o $(OBJ)/display.o $(OBJ)/validation_def.o
        $(GCC) $(OBJ)/student_client.o $(OBJ)/admin_def.o $(OBJ)/add_delete.o $(OBJ)/modify_search.o $(OBJ)/display.o $(OBJ)/validation_def.o $(LFLAGS) $(BIN)/student


clean:
        rm *.o
        rm *.gch
