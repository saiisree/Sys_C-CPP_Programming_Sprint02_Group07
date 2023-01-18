
/***********************************************************************************
 * FILENAME: student_header.h
 *
 * DESCRIPTION: This is a header file for student module.
 *
 * **********************************************************************************/

//Preprocessor Directives

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<math.h>
#include<unistd.h>
using namespace std;

//Defining Macros

#define ADD 1
#define DELETE 2
#define MODIFY 3
#define SEARCH 4
#define DISPLAY 5
#define EXIT 0

#define TRUE 1
#define FALSE 0

//Declaring class student

class Student
{
        public:
                Student();
                Student(string,int,string,long int,int,char,string,string,int,int,int,int,int,int,int,int,float);
                void admin_login();
                void admin_menu();
                void add_record();
                void delete_record();
                void modify_record();
                void search_record();
                void display_record();
                int rollNum_Validation(int);
                char email_Validation(string);
                int phoneNum_Validation(long int);
                char stream_Validation(string);
                int age_Validation(int);
                char gender_Validation(char);
        private:
                string name, email_id, address, stream;
                char gender;
                int roll_no, age, physics, chemistry, biology, maths, english, electronics, computers, total_marks;
                long int phone_no;
                float percentage;
};
