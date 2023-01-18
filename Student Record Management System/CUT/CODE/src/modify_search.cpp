
/**********************************************************************************
 * FILENAME: modify_search.cpp
 *
 * DESCRIPTION: This is a modify and search record definition file.
 *
 * ********************************************************************************/

#include"student_header.h"

/**********************************************************************************
 * Function Name: modify_record
 *
 * Description: In this fuction, the admin can modify the details.
 *
 * Parameters: void
 *
 * Return: void
 *
 * *******************************************************************************/

void Student::modify_record()
{
        system("clear");
        fstream file,file1;
        int rollno;
        int found = 0;
        cout << "--------------- Student Modify Details -------------" << endl;
        file.open("student_record.txt", ios::in);
        if (!file)
        {
                cout << "\n\t\t\tNo Data is Present.."<<endl;
                file.close();
        }
        else
        {
                cout << "\nEnter Roll No. of Student which you want to Modify: ";
                cin >> rollno;
                file1.open("record.txt", ios::app | ios::out);
                file >> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry  >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                while (!file.eof())
                {
                        if (rollno != roll_no)
                        file1 << " " << name << " " << roll_no << " " << email_id << " " << phone_no << " " << age << " " << gender  << " " << address << " " << stream << " " << physics << " " << chemistry << " " << maths << " " << biology <<  " " << computers << " " << electronics  << " " << english << " " << total_marks << " " << percentage << "\n" ;
                        else
                        {
				display_record();
                                cout<<"------------------------Please Enter the Details to modify---------------------------"<<endl;
                                cout << "\n\t\t\tEnter Name: ";
                                cin >> name;
                                while(1)
                                {
                                        cout<<"\t\t\tEnter Roll No: ";
                                        cin>>roll_no;
                                        if(rollNum_Validation(roll_no) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect roll_no"<<endl;
                                }
                                while(1)
                                {
                                        cout<<"\t\t\tEnter Email Id (abc@gmail.com): ";
                                        cin>>email_id;
                                        if(email_Validation(email_id) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect email id"<<endl;
                                }
                                while(1)
                                {
                                        cout<<"\t\t\tEnter Phone Number (98765XXXXX): ";
                                        cin>>phone_no;
                                        if(phoneNum_Validation(phone_no) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect phone numbe"<<endl;
                                }
				 while(1)
                                {
                                        cout<<"\t\t\tEnter Age (Between 15 to 18): ";
                                        cin>>age;
                                        if(age_Validation(age) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect age"<<endl;
                                }
                                while(1)
                                {
                                        cout<<"\t\t\tEnter Gender (F/f/M/m): ";
                                        cin>>gender;
                                        if(gender_Validation(gender) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect gender"<<endl;
                                }
                                cout<<"\t\t\tEnter Address: ";
                                cin>>address;
                                while(1)
                                {
                                        cout<<"\t\t\tEnter Stream (PCMB/PCME/PCMC): ";
                                        cin>>stream;
                                        if(stream_Validation(stream) == 1)
                                                break;
                                        else
                                                cout<<"\t\t\tIncorrect stream"<<endl;
                                }
				cout << "\t\t\tSUBJECT MARKS: "<<endl;
                                if(stream == "PCMB" || stream == "pcmb")
                                {
                                        cout<<"\t\t\tEnter Physics Marks: ";
                                        cin>>physics;
                                        cout<<"\t\t\tEnter Chemistry Marks: ";
                                        cin>>chemistry;
                                        cout<<"\t\t\tEnter Mathematics Marks: ";
                                        cin>>maths;
                                        cout<<"\t\t\tEnter Biology Marks: ";
                                        cin>>biology;
                                        cout<<"\t\t\tEnter English Marks: ";
                                        cin>>english;
                                        total_marks = (physics + chemistry + maths + biology + english);
                                        cout<<"\t\t\tTotal Marks: "<<total_marks<<endl;
                                        percentage = (total_marks * 100) / 500;
                                        cout<<"\t\t\tPercentage: "<<percentage<<"%";
                                }
                                if(stream == "PCMC" || stream == "pcmc")
                                {
                                        cout<<"\t\t\tEnter Physics Marks: ";
                                        cin>>physics;
                                        cout<<"\t\t\tEnter Chemistry Marks: ";
                                        cin>>chemistry;
                                        cout<<"\t\t\tEnter Mathematics Marks: ";
                                        cin>>maths;
                                        cout<<"\t\t\tEnter Computers Marks: ";
                                        cin>>computers;
                                        cout<<"\t\t\tEnter English Marks: ";
                                        cin>>english;
                                        total_marks = (physics + chemistry + maths + computers + english);
                                        cout<<"\t\t\tTotal Marks: "<<total_marks<<endl;
                                        percentage = (total_marks * 100) / 500;
                                        cout<<"\t\t\tPercentage: "<<percentage<<"%";
                                }
				if(stream == "PCME" || stream == "pcme")
                                {
                                        cout<<"\t\t\tEnter Physics Marks: ";
                                        cin>>physics;
                                        cout<<"\t\t\tEnter Chemistry Marks: ";
                                        cin>>chemistry;
                                        cout<<"\t\t\tEnter Mathematics Marks: ";
                                        cin>>maths;
                                        cout<<"\t\t\tEnter Electronics Marks: ";
                                        cin>>electronics;
                                        cout<<"\t\t\tEnter English Marks: ";
                                        cin>>english;
                                        total_marks = (physics + chemistry + maths + electronics + english);
                                        cout<<"\t\t\tTotal Marks: "<<total_marks<<endl;
                                        percentage = (total_marks * 100) / 500;
                                        cout<<"\t\t\tPercentage: "<<percentage<<"%";
                                }
                                file1 << " " << name << " " << roll_no << " " << email_id << " " << phone_no << " " << age << " " << gender  << " " << address << " " << stream << " " << physics << " " << chemistry << " " << maths << " " << biology <<  " " << computers << " " << electronics  << " " << english << " " << total_marks << " " << percentage << "\n" ;
                                found++;
                        }
                        file >> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry  >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                        cout<<endl;
                }
                if (found == 0)
                {
                        cout << "\n\n Student Roll No. Not Found...."<<endl;
                }
                file1.close();
                file.close();
                remove("student_record.txt");
                rename("record.txt", "student_record.txt");
        }
}

/************************************************************************************
 * Function Name: search_record
 *
 * Description: In this fuction, the admin can search the details.
 *
 * Parameters: void
 *
 * Return: void
 *
 * **********************************************************************************/

void Student::search_record()
{
        system("clear");
        fstream file;
        int found = 0;
        int roll;
        file.open("student_record.txt",ios::in);
        if(!file)
        {
                cout<<"Data is not present"<<endl;
        }
        else
        {
                cout<<"-------------------Search Student Record----------------------------"<<endl;
                cout<<"\nEnter the roll no of student to be searched: "<<endl;
                cin>>roll;
                file >> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                while(!file.eof())
                {
                        if(roll == roll_no)
                        {
				cout<<"\nStudent Name: "<<name<<endl;
                                cout<<"\nStudent Roll No: "<<roll_no<<endl;
                                cout<<"\nStudent Email Id: "<<email_id<<endl;
                                cout<<"\nStudent Phone Number: "<<phone_no<<endl;
                                cout<<"\nStudent Age: "<<age<<endl;
                                cout<<"\nStudent Gender: "<<gender<<endl;
                                cout<<"\nStudent Address: "<<address<<endl;
                                cout<<"\nStudent Stream: "<<stream<<endl;
                                cout<<"\nSubject Marks"<<endl;
                                cout<<"\n\tPhysics Marks: "<<physics<<endl;
                                cout<<"\n\tChemistry Marks: "<<chemistry<<endl;
                                cout<<"\n\tMathematics Marks: "<<maths<<endl;
                                cout<<"\n\tBiology Marks: "<<biology<<endl;
                                cout<<"\n\tComputers Marks: "<<computers<<endl;
                                cout<<"\n\tElectronics Marks: "<<electronics<<endl;
                                cout<<"\n\tEnglish Marks: "<<english<<endl;
                                cout<<"\n\tTotal Marks: "<<total_marks<<endl;
                                cout<<"\n\tPercentage: "<<percentage<<"%"<<endl;
                                found++;
                        }
                        file >> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                        if (found == 0)
                        {
                                cout<<"Student Roll Number not found"<<endl;
                        }
                        else
                        {
                                cout<<"Student Roll Number found"<<endl;
                        }
                }
                file.close();
        }
}
		