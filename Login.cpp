#include<iostream>
#include<string.h>
#include<fstream>
#include<conio.h>
#include<time.h>
using namespace std;
create_id()
{
    string userstr,passstr,check;
    cout<<"Enter the USERNAME: ";
    getline(cin,userstr);
    getline(cin,userstr);
    retry:
    cout<<endl<<"Enter the PASSWORD: ";
    char ch;
    ch = _getch();
    while(ch != 13)
    {
        passstr.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<endl<<"Re-Enter the PASSWORD: ";
    ch = _getch();
    while(ch != 13)
    {
        check.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(strcmp(passstr.c_str(),check.c_str())==0)
    {
        fstream fo;
        fo.open("USER_emp.txt");
        fo.seekg(0,ios::end);
        fo<<endl<<userstr;
        fo.close();
        fstream po;
        po.open("PASS_emp.txt");
        po.seekg(0,ios::end);
        po<<endl<<passstr;
        po.close();
    }
    else
    {
        cout<<"Password didn't match. Retry! "<<endl;
        goto retry;
    }
}
create_id_manager()
{
    string userstr,passstr,check;
    cout<<"Enter the USERNAME: ";
    getline(cin,userstr);
    getline(cin,userstr);
    retry:
    cout<<endl<<"Enter the PASSWORD: ";
    char ch;
    ch = _getch();
    while(ch != 13)
    {
        passstr.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<endl<<"Re-Enter the PASSWORD: ";
    ch = _getch();
    while(ch != 13)
    {
        check.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(strcmp(passstr.c_str(),check.c_str())==0)
    {
        fstream fo;
        fo.open("USER_manager.txt");
        fo.seekg(0,ios::end);
        fo<<endl<<userstr;
        fo.close();
        fstream po;
        po.open("PASS_manager.txt");
        po.seekg(0,ios::end);
        po<<endl<<passstr;
        po.close();
    }
    else
    {
        cout<<"Password didn't match. Retry! "<<endl;
        goto retry;
    }
}
create_id_owner()
{
    string userstr,passstr,check;
    cout<<"Enter the USERNAME: ";
    getline(cin,userstr);
    getline(cin,userstr);
    retry:
    cout<<endl<<"Enter the PASSWORD: ";
    char ch;
    ch = _getch();
    while(ch != 13)
    {
        passstr.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    cout<<endl<<"Re-Enter the PASSWORD: ";
    ch = _getch();
    while(ch != 13)
    {
        check.push_back(ch);
        cout << '*';
        ch = _getch();
    }
    if(strcmp(passstr.c_str(),check.c_str())==0)
    {
        fstream fo;
        fo.open("USER_owner.txt");
        fo.seekg(0,ios::end);
        fo<<endl<<userstr;
        fo.close();
        fstream po;
        po.open("PASS_owner.txt");
        po.seekg(0,ios::end);
        po<<endl<<passstr;
        po.close();
    }
    else
    {
        cout<<"Password didn't match. Retry! "<<endl;
        goto retry;
    }
}
create_id()
{
    int x;
    cout<<"Enter the designation number for which you want to create the ID:"<<endl<<"1. Employee"<<endl<<"2. Manager"<<endl<<"3. Owner"<<endl;
    cin>>x;
    switch (x)
   {
       case 1: create_id_emp();
               break;
       case 2: create_id_manager();
                break;
       case 3: create_id_owner();
               break;
       default: cout<<"!!Invalid Entry!!";
                break;
   }
}
edit_emp_details(string userstr)
    {
        string str1,str2,str3,str4,str5,str6;
        cout<<"Enter your Name: ";
        getline(cin,str1);
        getline(cin,str1);
        str2=userstr;
        cout<<"Enter your Age: ";
        getline(cin,str3);
        cout<<"Enter your Gender: ";
        getline(cin,str4);
        cout<<"Enter your Date of Joining: ";
        getline(cin,str5);
        cout<<"Enter your Qualification: ";
        getline(cin,str6);
        string txt=".txt";
        str2=str2+txt;
        ofstream fo(str2.c_str());
        fo<<str1<<endl;
        fo<<str2<<endl;
        fo<<str3<<endl;
        fo<<str4<<endl;
        fo<<str5<<endl;
        fo<<str6<<endl;
}
view_emp_details()
    {
        string empid,txt=".txt",otpt;
        cout<<"Enter the Employee ID for which you want to view details: ";
        getline(cin,empid);
        getline(cin,empid);
        empid=empid+txt;
        fstream of;
        of.open(empid.c_str());
        cout<<"Name: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Employee ID: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Age: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Gender: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Date of Joining: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Qualification: ";
        of>>otpt;
        cout<<otpt<<endl;
        }
view_emp_details(string userstr)
    {
        string empid,txt=".txt",otpt;
        empid=userstr;
        empid=empid+txt;
        fstream of;
        of.open(empid.c_str());
        cout<<"Name: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Employee ID: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Age: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Gender: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Date of Joining: ";
        of>>otpt;
        cout<<otpt<<endl;
        cout<<"Qualification: ";
        of>>otpt;
        cout<<otpt<<endl;
        }
employee_functions(string userstr)
{
    int x;
    cout<<"1. To Edit the Employee Details "<<endl<<"2. To View Employee Details "<<endl;
    cin>>x;
    switch (x)
   {
       case 1: edit_emp_details(userstr);
               break;
       case 2: view_emp_details(userstr);
                break;
       default: cout<<endl<<"!!INVALID ENTRY!!"<<endl;
                break;
   }
}
employee_functions_manager(string userstr)
{
    int x;
    cout<<"1. To Edit the Employee Details "<<endl<<"2. To View Employee Details "<<endl;
    cin>>x;
    switch (x)
   {
       case 1: edit_emp_details(userstr);
               break;
       case 2: view_emp_details();
                break;
       default: cout<<endl<<"!!INVALID ENTRY!!"<<endl;
                break;
   }
}
loggin_emp()
{
    fstream fo;
    int o=0;
    fo.open("USER_emp.txt");
    string userstr,passstr;
    cout<<"Enter the User name: ";
    getline(cin,userstr);
    getline(cin,userstr);
    string userdata;
    for(int pok=0;pok<100;pok++)
    {
        fo>>userdata;
        o++;
        if(strcmp(userstr.c_str(),userdata.c_str())==0)
        {
            cout<<"Enter the Password: ";
            char ch;
            ch = _getch();
            while(ch != 13)
            {
            passstr.push_back(ch);
            cout << '*';
            ch = _getch();
            }
            fstream po;
            po.open("PASS_emp.txt");
            string passdata;
            int itp=0;
            for(itp=0;(po>>passdata)&&(itp<(o+1));itp++)
            {
                if(itp==o-1)
                {
                    if(strcmp(passstr.c_str(),passdata.c_str())==0)
                    {
                        cout<<endl<<"Logged in"<<endl;
                        employee_functions(userstr);
                                    // TABLE FOR THE PARTICULAR MEMBER  //
                        // THERE PARTICULAR FEATURES OR FUNCTION AFTER LOGINING IN //
                        po.close();
                        goto logged;
                    }
                    else
                    {
                        cout<<"Invalid Credentials"<<endl;
                        po.close();
                        goto logged;
                    }
                }
            }
            po.close();
        }
    }
    fo.close();
    logged:;
    return 0;
}
loggin_manager()
{
    fstream fo;
    int o=0;
    fo.open("USER_manager.txt");
    string userstr,passstr;
    cout<<"Enter the User name: ";
    getline(cin,userstr);
    getline(cin,userstr);
    string userdata;
    for(int pok=0;pok<100;pok++)
    {
        fo>>userdata;
        o++;
        if(strcmp(userstr.c_str(),userdata.c_str())==0)
        {
            cout<<"Enter the Password: ";
            char ch;
            ch = _getch();
            while(ch != 13)
            {
            passstr.push_back(ch);
            cout << '*';
            ch = _getch();
            }
            fstream po;
            po.open("PASS_manager.txt");
            string passdata;
            int itp=0;
            for(itp=0;(po>>passdata)&&(itp<(o+1));itp++)
            {
                if(itp==o-1)
                {
                    if(strcmp(passstr.c_str(),passdata.c_str())==0)
                    {
                        cout<<endl<<"Logged in"<<endl;
                        employee_functions_manager(userstr);
                                    // TABLE FOR THE PARTICULAR MEMBER  //
                        // THERE PARTICULAR FEATURES OR FUNCTION AFTER LOGINING IN //

                        po.close();
                        goto logged;
                    }
                    else
                    {
                        cout<<"Invalid Credentials"<<endl;
                        po.close();
                        goto logged;
                    }
                }
            }
            po.close();
        }
    }
    fo.close();
    logged:;
    return 0;
}
loggin_owner()
{
    fstream fo;
    int o=0;
    fo.open("USER_owner.txt");
    string userstr,passstr;
    cout<<"Enter the User name: ";
    getline(cin,userstr);
    getline(cin,userstr);
    string userdata;
    for(int pok=0;pok<100;pok++)
    {
        fo>>userdata;
        o++;
        if(strcmp(userstr.c_str(),userdata.c_str())==0)
        {
            cout<<"Enter the Password: ";
            char ch;
            ch = _getch();
            while(ch != 13)
            {
            passstr.push_back(ch);
            cout << '*';
            ch = _getch();
            }
            fstream po;
            po.open("PASS_owner.txt");
            string passdata;
            int itp=0;
            for(itp=0;(po>>passdata)&&(itp<(o+1));itp++)
            {
                if(itp==o-1)
                {
                    if(strcmp(passstr.c_str(),passdata.c_str())==0)
                    {
                        int choice;
                        cout<<endl<<"Logged in"<<endl;
                        cout<<"Enter the function code: "<<endl<<"1. Create ID for the company"<<endl<<"2. Check Employee details"<<endl;
                        cin>>choice;
                        switch(choice)
                        {
                            case 1: create_id();
                                    break;
                            case 2: view_emp_details();
                                    break;
                            default: cout<<endl<<"!!INVALID ENTRY!!"<<endl;
                                    break;
                        }
                                    // TABLE FOR THE PARTICULAR MEMBER  //
                        // THERE PARTICULAR FEATURES OR FUNCTION AFTER LOGINING IN //
                        goto logged;
                    }
                    else
                    {
                        cout<<"Invalid Credentials"<<endl;
                        po.close();
                        goto logged;
                    }
                }
            }
            po.close();
        }
    }
    fo.close();
    logged:;
    return 0;
}
loggin()
{
    int x;
    cout<<"Enter Your Designation Number: "<<endl<<"1. Owner "<<endl<<"2. Manager "<<endl<<"3. Employee "<<endl;
    cin>>x;
    switch (x)
   {
       case 1: loggin_owner();
               break;
       case 2: loggin_manager();
                break;
       case 3: loggin_emp();
               break;
       default: cout<<endl<<"!!INVALID ENTRY!!"<<endl;
                break;
   }
}
int main()
{
    loggin();
}
