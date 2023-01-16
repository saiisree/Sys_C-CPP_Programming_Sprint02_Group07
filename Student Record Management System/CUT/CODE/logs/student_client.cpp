#include<iostream>
using namespace std;
#include"student.h"
#include"log.h"
int main()
{
        cout<<"Student Record Management System"<<endl;
        LOG_INFO("Roll number is %d\n",student(313456));
        LOG_INFO("Roll number is %d\n",student(0));
        return 0;
}