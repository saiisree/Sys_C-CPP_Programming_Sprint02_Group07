INC = /home/saisree/student_record/inc
SRC = /home/saisree/student_record/src
OBJ = /home/saisree/student_record/obj
BIN = /home/saisree/student_record/bin
 

CFLAGS = -c -g -Wall
LFLAGS = -o
GCC = gcc
CVFLAGS = -Wall -c -g
IFLAGS = -I $(INC)

 

all : $(BIN)/student

 

$(OBJ)/main_menu_client.o : $(SRC)/main_menu_client.cpp
    $(GCC) $(CFLAGS) $(SRC)/main_menu_client.cpp$(IFLAGS)
    mv *.o/home/saisree/student_record/obj

 

$(OBJ)/admin_def.o : $(SRC)/admin_def.cpp
    $(GCC) $(CFLAGS) $(SRC)/admin_def.cpp $(IFLAGS)
    mv *.o/home/saisree/student_record/obj

 

$(OBJ)/add_delete_def.o : $(SRC)/add_delete_def.cpp
    $(GCC) $(CFLAGS) $(SRC)/add_delete_def.cpp ($IFLAGS)
    mv *.o/home/saisree/student_record/obj

 

$(OBJ)/modify_search_def.o : $(SRC)/modify_search_def.cpp
    $(GCC) $(CFLAGS) $(SRC)/modify_search_def.cpp $(IFLAGS)
    mv *.o/home/saisree/student_record/obj

 

$(OBJ)/validation_def.o : $(SRC)/validation_def.cpp
    $(GCC) $(CFLAGS) $(SRC)/validation_def.cpp $(IFLAGS)
    mv *.o/home/saisree/student_record/obj

 


$(BIN)/student : $(OBJ)/main_menu_client.o $(OBJ)/admin_def.o $(OBJ)/add_delete_def.o $(OBJ)/modify_search_def.o $(OBJ)/validation_def.o
    $(GCC) $(OBJ)/main_menu_client.o $(OBJ)/admin_def.o $(OBJ)/add_delete_def.o $(OBJ)/modify_search_def.o $(OBJ)/validation_def.o $(LFLAGS) $(BIN)/student

 

clean:
    rm -f $(OBJ)/*.o $(BIN)/student