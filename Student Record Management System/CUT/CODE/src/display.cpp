/***********************************************************************************
 * FILENAME: display.cpp
 *
 * DESCRIPTION: This is a display record definition file
 *
 * **********************************************************************************/

#include"student_header.h"

/*****************************************************************************************
 * Function Name: display_record
 *
 * Description: It displays the student details information
 *
 * Parameters: void
 *
 * Returns: void
 *
 * *****************************************************************************************/

void Student::display_record()
{
        fstream file;
        int total = 1;
        cout<<"------------------Student details------------------------"<<endl;
        file.open("student_record.txt",ios::in);
        if(!file)
        {
                cout<<"File cannot be open"<<endl;
                file.close();
        }
        else
        {
                file>> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                while(!file.eof())
                {
                        cout<<"\n\n\t\tStudent No: "<<total++<<endl;
                        cout<<"\t\t\tStudent Name: "<<name<<endl;
                        cout<<"\t\t\tStudent Roll No: "<<roll_no<<endl;
                        cout<<"\t\t\tStudent Email Id: "<<email_id<<endl;
                        cout<<"\t\t\tStudent Phone Number: "<<phone_no<<endl;
                        cout<<"\t\t\tStudent Age: "<<age<<endl;
                        cout<<"\t\t\tStudent Gender: "<<gender<<endl;
                        cout<<"\t\t\tStudent Address: "<<address<<endl;
                        cout<<"\t\t\tStudent Stream: "<<stream<<endl;
                        cout<<"\t\t\tSUBJECT MARKS:"<<endl;
                        cout<<"\t\t\tPhysics Marks: "<<physics<<endl;
                        cout<<"\t\t\tChemistry Marks: "<<chemistry<<endl;
                        cout<<"\t\t\tMathematics Marks: "<<maths<<endl;
                        cout<<"\t\t\tBiology Marks: "<<biology<<endl;
                        cout<<"\t\t\tComputers Marks: "<<computers<<endl;
                        cout<<"\t\t\tElectronics Marks: "<<electronics<<endl;
                        cout<<"\t\t\tEnglish Marks: "<<english<<endl;
                        cout<<"\t\t\tTotal Marks: "<<total_marks<<endl;
                        cout<<"\t\t\tPercentage: "<<percentage<<"%"<<endl;
                        file>> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                }
		if(total == 0)
                {
                        cout<<"No Data is found"<<endl;
                }
        }
        cout<<"\n------------------------------------------------------------------"<<endl;
        file.close();
}