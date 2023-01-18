
/************************************************************************************
 * FILENAME: admin_def.cpp
 *
 * DESCRIPTION: This is admin module definition file.
 *
 * **********************************************************************************/

#include"student_header.h"

/**********************************************************************************
 * FUNCTION NAME: admin_login
 *
 * DESCRIPTION: In this function,the admin logins by providing username and password.
 *
 * PARAMETERS: username and password
 *
 * ********************************************************************************/

void Student::admin_login()
{
        cout<<"--------------------Admin Login--------------------"<<endl;
        string Username, Password, username, password;
        fstream file;
        file.open("adminlogin.txt");
        if(!file)
        {
            cout<<"Error creating file!"<<endl;
        }
        else
        {
            cout<<"Enter Username: ";
            cin>>Username;
            Password = getpass("Enter Password: ");
        }
        file >> username;
        file >> password;
        if(username==Username && password==Password)
            cout<<"Logged in Successfully!!"<<endl;
        else
        {
            cout<<"Login Failed!"<<endl;
            admin_login();
        }
        file.close();
        admin_menu();
}


/**********************************************************************************
 * FUNCTION NAME : admin_menu
 *
 * DESCRIPTION: This function is used to perform various operations like add, delete, modify, search and display that has to be performed by the admin
 *
 * PARAMETERS: void
 *
 * *******************************************************************************/

void Student::admin_menu()
{
        int ch;
        while(1)
        {
                cout<<"--------------------Menu-----------------------"<<endl;
                cout<<"1. Add Record"<<endl;
                cout<<"2. Delete Record"<<endl;
                cout<<"3. Modify Record"<<endl;
                cout<<"4. Search Record"<<endl;
                cout<<"5. Display Record"<<endl;
                cout<<"0. Exit"<<endl;
                cout<<"Enter the choice: "<<endl;
                cin>>ch;
                switch(ch)
                {
                        case ADD:
                                add_record();
                                break;
                        case DELETE:
                                delete_record();
                                break;
                        case MODIFY:
                                modify_record();
                                break;
                        case SEARCH:
                                search_record();
                                break;
                        case DISPLAY:
                                display_record();
                                break;
                        case EXIT:
                                exit(0);
                        default:
                                cout<<"Invalid Choice"<<endl;
                }
        }
}