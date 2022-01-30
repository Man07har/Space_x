// space-x company information management
#include<iostream>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#include<windows.h>
#include<iomanip>
#include<conio.h>
using namespace std;

void menu();             //functions
void pascode();
void cpascode();
void call_customer();
void pinfoshow();

class one{                 //abstract class declaration
    public:
 virtual void get()=0;
 virtual void show()=0;
};

class info:public one
{    //takes in the customers information to fix the appointmet and shows them
    public:
    char name[50],time[50];
    int age,num;
     void get()
    {
        system("cls");
        cin.sync();
        cout<<"\nEnter the Customer's name: ";
        cin.getline(name,50);
        cout<<"\n Enter age: ";
        cin>>age;
        cout<<"\nEnter appointment number: ";
        cin>>num;
        cout<<"\nEnter Appointment Time: ";
    }
    void show()
    {
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nNO: "<<num;
        cout<<"\nTime: "<<time;
    }
};
class staff:public one                      //staff data and it's output
{
 public:
 char all[1000],name[50],age[50],sal[50],pos[50];
 void get()
 {
    ofstream out("staff.txt",ios::app);
    {
        system("cls");
        cout<<"\nEnter name: ";
        cin.getline(name,50);
        cout<<"\nage: ";
        cin.getline(age,50);
        cout<<"\nEnter Salary: ";
        cin.getline(sal,50);
        cout<<"\nEnter working position: ";
        cin.getline(pos,50);
    }
    out<<"\n Name: "<<name<<"\nage "<<age<<"\nsalary: "<<"\nPosition: "<<pos;
    out.close();
    cout<<"\nYour information is being saved";
    getch();
    menu();
  }
 void show()
 {
    ifstream in("staff.txt");
  if(!in)
  {
      cout<<"\nFile open error\n";
  }
  while(!(in.eof()))
  {
      in.getline(all,1000);
      cout<<all<<endl;
  }
  cout<<"\n\n\tPress any key to continue";
  getch();
  menu();
 }
};
class alex:public info                   // Incharge officer 1
{
 public:
 info a1;
 void get()
 {
     system("cls");
     ofstream out("alex.txt", ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1,sizeof(info));
     out.close();
     cout<<"\nYour enrty has been saved";
     getch();
     menu();
 }
 void show()
 {
     ifstream in("alex.txt");
     if(in==NULL)
     {
         cout<<"\n\n No data in the file\n\n";
         cout<<"\n\nPress any  key  to continue\n\n";
         getch();
         menu();
     }
     else
     {
         while(!in.eof())
         {
             in.read((char*)&a1,sizeof(a1));
             a1.show();
         }
         in.close();
         getch();
         menu();
     }
 }
};
class Robert:public info                   //Incharge officer 2
{
    public:
 info a1;
 void get()
 {
     system("cls");
     ofstream out("Robert.txt", ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1,sizeof(info));
     out.close();
     cout<<"\nYour enrty has been saved";
     getch();
     menu();
     }
     void show()
     {
     ifstream in("Robert.txt");
     if(in==NULL)
     {
         cout<<"\n\n No data in the file\n\n";
         cout<<"\n\nPress any  key  to continue\n\n";
         getch();
         menu();
     }
     else
     {
         while(!in.eof())
         {
             in.read((char*)&a1,sizeof(a1));
             a1.show();
         }
         in.close();
         getch();
         menu();
       }
    }

};
class Cris:public info                  // Incharge officer 3
{
    public:
 info a1;
 void get()
 {
     system("cls");
     ofstream out("Cris.txt", ios::app|ios::binary);
     a1.get();
     out.write((char*)&a1,sizeof(info));
     out.close();
     cout<<"\nYour entry has been saved";
     getch();
     menu();
 }
 void show()
 {
     ifstream in("Cris.txt");
     if(in==NULL)
     {
         cout<<"\n\n No data in the file\n\n";
         cout<<"\n\nPress any  key  to continue\n\n";
         getch();
         menu();
     }
     else
     {
         while(!in.eof())
         {
             in.read((char*)&a1,sizeof(a1));
             a1.show();
         }
         in.close();
         getch();
         menu();
     }
     }
    };
    void call_customer()
{
    system("cls");
    int choice;
    cout<<"\n\n\t1. Press 1 for M.R Alex \n\n\t2. Press 2 for M.R Robert \n\n\t3. Press 3 for M.R Ahamd\n";
    cout<<"\n Please enter your choice\n";
    cin>>choice;
    one *ptr;
    alex s3;
    Robert s4;
    Cris s5;
    if(choice==1 )
    {
 ptr=&s3;
 ptr->get();
    }
  else  if(choice==2 )
    {
       ptr=&s4;
       ptr->get();
    }
    else if(choice==3 )
    {
       ptr=&s5;
       ptr->get();
    }
    else {
        cout<<"\n Sorry Invalid choice\n";
        getch();
        menu();
    }
  }
    class information
    {
         public:
    void inchargeinfo()
    {
        system("cls");
        system("color f3");
        cout<<"\n===================================================================================\n";
        cout<<"\n Three co-ordinators are available timing is given below\n";
        cout<<"\t\tM.R Alex\n";
        cout<<"\t\t\tTimings\n" ;
        cout<<"\tMonday to Friday \t\t9AM to 5PM" ;
        cout<<"\n\tSaturday \t\t9AM to 1PM" ;
        cout<<"\n\tSunday \t\tDay off" ;
        cout<<"\n===================================================================================\n";
        cout<<"\t\tM.R Robert\n";
        cout<<"\t\t\tTimings\n" ;
        cout<<"\n\tMonday to Friday \t\t9AM to 5PM" ;
        cout<<"\n\tSaturday \t\t9AM to 1PM" ;
        cout<<"\n\tSunday \t\tDay off" ;
        cout<<"\n===================================================================================\n";
        cout<<"\t\tM.R Cris\n";
        cout<<"\t\t\tTimings\n" ;
        cout<<"\n\tMonday to Friday \t\t9AM to 5PM" ;
        cout<<"\n\tSaturday \t\t9AM to 1PM" ;
        cout<<"\n\tSunday \t\tDay off" ;
    }
  };
   void pinfoshow()
  {
    system("cls");
    int choice;
    cout<<"\n\n\t1. Press 1 for Mr Alex \n\n\t2. Press 2 for Dr Robert \n\n\t3. Press 3 for Dr Ahamd\n";
    cout<<"\n Please enter your choice\n";
    cin>>choice;
    one *ptr;
    alex s3;
    Robert s4;
    Cris s5;
    if(choice==1 )
    {
     ptr=&s3;
    ptr->show();
    }
  else  if(choice==2 )
    {
       ptr=&s4;
       ptr->show();
    }
    else if(choice==3 )
    {
       ptr=&s5;
       ptr->show();
    }
    else {
        cout<<"\n Sorry Invalid choice\n";
        getch();
        menu();
    }
}
    void menu()
{
    system("cls");
    system("color FC");
    cout<<"\n";
    cout<<"\n";
    cout<<"\t\t          |       +++++++ Main Menu ++++++++++        |\n";
    cout<<"\t\t          |        Company Information management     |\n";
    cout<<"\t\t          |===========================================|\n";
    cout<<"\t\t Please select an option\n";
    cout<<"\t1\tPress 1 for Co-ordinator Information\n";
    cout<<"\t2\tPress 2 for Co-ordinator appointment\n";
    cout<<"\t3\tPress 3 for saving staff information\n";
    cout<<"\t4\tPress 4 for checking Customer's appointment\n";
    cout<<"\t5\tPress 5 for checking staff information\n";
    cout<<"\t6\tPress 6 for change or create password\n";
    cout<<"\t7\t\t Press 7 for logout\n";
    cout<<"\n========================================================================================================================\n";
    cout<<"\n Please enter your choice";
    information a1;
    one *ptr;
    staff a2;
    int a;
    cin>>a;
    if(a==1)
    {
        a1.inchargeinfo();
    }
    else if(a==2)
    {
        call_customer();
    }
    else if(a==3)
    {
       ptr=&a2;
       ptr->get();
    }
    else if(a==4)
    {
       pinfoshow();
    }
    else if(a==5)
    {
        ptr=&a2;
        ptr->show();
    }
    else if(a==6)
    {
        cpascode();
    }
    else if(a==7)
    {
        pascode();
    }
    else
    {
        cout<<"\n Sorry Invalid choice\n";
    }
}
 void pascode(){
    system("cls");
    char p1[50],p2[50],p3[50];
    system("color FC");
    ifstream in("password.txt");
    {
        cin.sync();
        cout<<"\t\t\t\nEnter the password: ";
        cin.getline(p1,50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0)
        {
        menu();
        }
        else
        {
            cout<<"\t\t\t\n Incorrect passord Please try again......";
            Sleep(999);
            pascode();
        }
    }
    in.close();

}
void cpascode()
{
    char n[50];
    system("cls");
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\tEnter the new password\n";
        cin.getline(n,50);
        out<<n;
    }
    out.close();
    cout<<"\n\n\n\tYour password has been saved\n";
    getch();
    menu();
}
int main()
{
    pascode();
    system("pause");
}
