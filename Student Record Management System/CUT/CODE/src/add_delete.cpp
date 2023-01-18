
/************************************************************************************
 * FILENAME: add_delete.cpp
 *
 * DESCRIPTION: This is a add and delete record definition file
 *
 * **********************************************************************************/

#include"student_header.h"

/**************************************************************************************
 * Function Name: student()
 *
 * Description: This function calls the default constructor
 *
 **************************************************************************************/


Student::Student()
{
        name=" ";
        email_id=" ";
        address=" ";
        gender=' ';
        stream=" ";
        roll_no = age = physics = chemistry = biology = maths = english = electronics = computers = total_marks = 0;
        phone_no = 0;
        percentage = 0;
}

/**************************************************************************************
 *  Function Name: student()
 *
 *  Description: This function calls the parametrized constructor
 *
 *  Parameters: name, email_id, address, gender, stream, roll_no, age, physics, chemistry,
 *                biology, maths, english, electronics, computers, total_marks, phone_no, percentage
 *
 *  **************************************************************************************/

Student::Student(string name,int roll_no,string email_id,long int phone_no,int age,char gender,string address,string stream,int physics,int chemistry,int maths,int biology,int computers,int electronics,int english,int total_marks,float percentage)
{
        this->name = name;
        this->roll_no = roll_no;
        this->email_id = email_id;
        this->phone_no = phone_no;
        this->age = age;
        this->gender = gender;
        this->address = address;
        this->stream = stream;
        this->physics = physics;
        this->chemistry = chemistry;
        this->maths = maths;
        this->biology = biology;
        this->computers = computers;
        this->electronics = electronics;
        this->english = english;
        this->total_marks = total_marks;
        this->percentage = percentage;
}


/********************************************************************************
 * Function Name: add_record
 *
 * Description: In this fuction, the admin can add the details.
 *
 * Parameters: void
 *
 * Return: void
 *
 * ******************************************************************************/

void Student::add_record()
{
        system("clear");
        fstream file;
        cout<<"----------------------Add Student Details----------------------"<<endl;
        cout<<"\nEnter Name: ";
        cin>>name;
        roll_no:
                cout<<"\nEnter Roll No: ";
                cin>>roll_no;
                if(rollNum_Validation(roll_no) == 0)
                {
                        cout<<"Incorrect";
                        goto roll_no;
                }
        email_id:
                cout<<"\nEnter Email Id (abc@gmail.com): ";
                cin>>email_id;
                if(email_Validation(email_id) == 0)
                {
                        cout<<"Incorrect";
                        goto email_id;
                }
        phone_no:
                cout<<"\nEnter Phone Number (98765XXXXX): ";
                cin>>phone_no;
                if(phoneNum_Validation(phone_no) == 0)
                {
                        cout<<"Incorrect";
                        goto phone_no;
                }
        age:
                cout<<"\nEnter Age (Between 15 to 18): ";
                cin>>age;
                if(age_Validation(age) == 0)
                {
                        cout<<"Incorrect";
                        goto age;
                }
	gender:
                cout<<"\nEnter Gender (F/f/M/m): ";
                cin>>gender;
                if(gender_Validation(gender) == 0)
                {
                        cout<<"Incorrect";
                        goto gender;
                }
        cout<<"\nEnter Address: ";
        cin>>address;
        stream:
                cout<<"\nEnter Stream (PCMB/PCME/PCMC): ";
                cin>>stream;
                if(stream_Validation(stream) == 0)
                {
                        cout<<"Incorrect";
                        goto stream;
                }
        cout<<"\nSubject Marks: "<<endl;
        if(stream == "PCMB" || stream == "pcmb")
        {
                cout<<"\n\tEnter Physics Marks: ";
                cin>>physics;
                cout<<"\n\tEnter Chemistry Marks: ";
                cin>>chemistry;
                cout<<"\n\tEnter Mathematics Marks: ";
                cin>>maths;
                cout<<"\n\tEnter Biology Marks: ";
                cin>>biology;
                cout<<"\n\tEnter English Marks: ";
                cin>>english;
                total_marks = (physics + chemistry + maths + biology + english);
                cout<<"\n\tTotal Marks: "<<total_marks;
                percentage = (total_marks * 100) / 500;
                cout<<"\n\n\tPercentage: "<<percentage<<"%";
        }
	else if(stream == "PCME" || stream == "pcme")
        {
                cout<<"\n\tEnter Physics Marks: ";
                cin>>physics;
                cout<<"\n\tEnter Chemistry Marks: ";
                cin>>chemistry;
                cout<<"\n\tEnter Mathematics Marks: ";
                cin>>maths;
                cout<<"\n\tEnter Electronics Marks: ";
                cin>>electronics;
                cout<<"\n\tEnter English Marks: ";
                cin>>english;
                total_marks = (physics + chemistry + maths + electronics + english);
                cout<<"\n\tTotal Marks: "<<total_marks;
                percentage = (total_marks * 100) / 500;
                cout<<"\n\n\tPercentage: "<<percentage<<"%";
        }
        else if(stream == "PCMC" || stream == "pcmc")
        {
                cout<<"\n\tEnter Physics Marks: ";
                cin>>physics;
                cout<<"\n\tEnter Chemistry Marks: ";
                cin>>chemistry;
                cout<<"\n\tEnter Mathematics Marks: ";
                cin>>maths;
                cout<<"\n\tEnter Computer Science Marks: ";
                cin>>computers;
                cout<<"\n\tEnter English Marks: ";
                cin>>english;
                total_marks = (physics + chemistry + maths + computers + english);
                cout<<"\n\tTotal Marks: "<<total_marks;
                percentage = (total_marks * 100) / 500;
                cout<<"\n\n\tPercentage: "<<percentage<<"%";
        }
	cout<<"\n-----------------------------------------------------------"<<endl;
        file.open("student_record.txt",ios::app | ios::out);
        file<< " " <<name<< " " << " " <<roll_no<< " " <<email_id<< " " <<phone_no<< " " <<age<< " " <<gender<< " " <<address<< " " <<stream<< " " <<physics<< " " <<chemistry<< " " <<maths<< " " <<biology<< " " <<computers<< " " <<electronics<< " " <<english<< " " <<total_marks<< " " <<percentage<< " " <<"\n";
        file.close();
        cout<<endl;
}


/**************************************************************************************
 * Function Name: delete_record
 *
 * Description: In this fuction, the admin can delete the details.
 *
 * Parameters: void
 *
 * Return: void
 *
 * ************************************************************************************/

void Student::delete_record()
{
        system("clear");
        cout<<"----------------------------Delete Student Record------------------------------"<<endl;
        fstream file,file1;
        int found = 0;
        int roll;
        file.open("student_record.txt",ios::in);
        if(!file)
        {
                cout<<"No data is present"<<endl;
                file.close();
        }
        else
        {
                cout<<"\nEnter the  Roll No of the student to be deleted: "<<endl;
                cin>>roll;
                file1.open("record.txt",ios::app|ios::out);
                file>> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                while(!file.eof())
                {
                        if(roll!=roll_no)
                        {
                                file1<< " " <<name<< " " << " " <<roll_no<< " " <<email_id<< " " <<phone_no<< " " <<age<< " " <<gender<< " " <<address<< " " <<stream<< " " <<physics<< " " <<chemistry<< " " <<maths<< " " <<biology<< " " <<computers<< " " <<electronics<< " " <<english<< " " <<total_marks<< " " <<percentage<< " " <<"\n";
                        }
                        else
                        {
                                found++;
                                cout<<"Successfully deleted"<<endl;
                        }
                        file>> name >> roll_no >> email_id >> phone_no >> age >> gender >> address >> stream >> physics >> chemistry >> maths >> biology >> computers >> electronics >> english >> total_marks >> percentage;
                }
                if(found == 0)
                {
                        cout<<"Student roll no not found"<<endl;
                }
                file1.close();
		file.close();
                remove("student_record.txt");
                rename("record.txt", "student_record.txt");
        }
}