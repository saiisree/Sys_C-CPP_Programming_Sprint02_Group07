#include<iostream>
#include"student.h"
#include"log.h"

int student(int roll_no)
{
        if(roll_no==0)
                LOG_INFO("Student roll number should not be zero");
        return roll_no;
}