#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
// Global vaiables to access in all functions 
    string name, mother_name, father, DOB, school_name, division, grade, min_marks;
    int roll_no, total;
    float per;
    int hindi, english, maths, science, sanskrit, sst , sub_counter = 1 ;
    char yesno;
void take_input()
{
  // Taking input of student information
      cout << "Enter the name of student's school : ";
      cin.ignore();
      getline(cin, school_name);
      system("cls");
      cout << "Name of studnet : ";
      // cin.ignore();
      getline(cin, name);
      system("cls");
      cout << "Enter the name of student's Mother : ";
      getline(cin, mother_name);
      system("cls");
      cout << "Enter the name of student's Father : ";
      getline(cin, father);
      system("cls");
      cout << "Enter roll no : ";
      cin >> roll_no;
      system("cls");
      cout << "Enter the DOB |xx/xx/xxxx| of student : ";
      getline(cin, DOB);
      system("cls");
      // taking input of student marks
      cout << ""<< sub_counter<<"/6  : Enter the marks of hindi    : ";
      cin >> hindi;
      sub_counter++;
      system("cls");
      cout << ""<< sub_counter<<"/6 | Enter the marks of englihs  : ";
      cin >> english;
      sub_counter++;
      system("cls");
      cout << ""<< sub_counter<<"/6 | Enter the marks of maths    : ";
      cin >> maths;
      sub_counter++;
      system("cls");
      cout << ""<< sub_counter<<"/6 | Enter the marks of science  : ";
      cin >> science;
      sub_counter++;
      system("cls");
      cout << ""<< sub_counter<<"/6 | Enter the marks of sanskrit : ";
      cin >> sanskrit;
      sub_counter++;
      system("cls");
      cout << ""<< sub_counter<<"/6 | Enter the marks of sst      : ";
      cin >> sst;
      system("cls");
  // total of all sub marks
      total = hindi + english + sst + science + sanskrit + maths;
  // % of SUBJECTS
      per = (float)total / 6;
  // GRADE SYSTEM
      if (per >= 91 && per <= 100)
  {
        division = "FIRST DIVISION";
        grade = "A+";
  }
  else if (per >= 76 && per <= 90)
  {
      division = "FIRST DIVISION";
      grade = "A";
  }
  else if (per >= 61 && per <= 75)
  {
      division = "FIRST DIVISION";
    grade = "B";
  }
  else if (per >= 41 && per <= 60)
  {
    division = "SECOND DIVISION";
    grade = "C";
  }
  else if (per >= 0 && per <= 40)
  {
    division = "FAIL";
    grade = "F";
  }

  // logic for if srudent fail to achive min marks
  if (hindi < 33)
  {
    division = "FAIL";
  }
  else if (english < 33)
  {
    division = "FAIL";
  }
  else if (maths < 33)
  {
    division = "FAIL";
  }
  else if (science < 33)
  {
    division = "FAIL";
  }
  else if (sanskrit < 33)
  {
    division = "FAIL";
  }
  else if (sst < 33)
  {
    division = "FAIL";
  }
}

// loading animation
void loading()
{
  cout << "loading please wait ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  // system("cls") it is used for cleaning screen
  system("cls");
  cout << "loading please wait ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "loading please wait ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "loading please wait ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "Almost done ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "Almost done ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "Almost done ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  cout << "Almost done ";
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  Sleep(100);
  cout <<".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  Sleep(100);
  cout << ".";
  cout << ".";
  system("cls");
  for (int i = 4; i; i--)
  {
    cout << "Estimated time to complete in " << i << " seconds ";
    Sleep(1000);
    system("cls");
  }
}
void get_output()
{
  // getGrades

  cout << endl;
  cout << "|---------------------------------------------------------------------| " << endl;
  cout << "|            Rajasthan Board of Secondary Education , Ajmer           |" << endl;
  cout << "|---------------------------------------------------------------------| " << endl;
  cout << "|    "
       << "Student  Name : " << name << "                                     " << endl;
  cout << "|    "
       << "Mother   Name : " << mother_name << "                              " << endl;
  cout << "|    "
       << "Father   Name : " << father << "                                   " << endl;
  cout << "|    "
       << "Roll NO       : " << roll_no << "                                  " << endl;
  cout << "|    "
       << "School Name   : " << school_name << "                              " << endl;
  cout << "|--------------------------------------------------------------------- " << endl;
  cout << "|    "
       << "SUBJECTS  "
       << "      MAX MARKS "
       << "   MIN MAX "
       << "    THEROY MARKS  " << endl;
  cout << "|--------------------------------------------------------------------- " << endl;
  cout << "|    "
       << "HINDI"
       << "             100"
       << "          33"
       << "             " << hindi << "" << endl;
  cout << "|    "
       << "ENGLISH"
       << "           100"
       << "          33"
       << "             " << english << "" << endl;
  cout << "|    "
       << "MATHS"
       << "             100"
       << "          33"
       << "             " << maths << "" << endl;
  cout << "|    "
       << "SCIENCE"
       << "           100"
       << "          33"
       << "             " << science << "" << endl;
  cout << "|    "
       << "SANSKRIT"
       << "          100"
       << "          33"
       << "             " << sanskrit << "" << endl;
  cout << "|    "
       << "SOCIAL SCIENCE"
       << "    100"
       << "          33"
       << "             " << sst << "" << endl;
  cout << "|--------------------------------------------------------------------- " << endl;
  cout << "|    "
       << "                  600        |     "
       << "TOTAL      " << total << endl;
  cout << "|--------------------------------------------------------------------- " << endl;
  cout << "|PERCENTAGE : " << per << " " << endl;
  cout << "|RESULT     : " << division << " " << endl;
  cout << "|GRADE      : " << grade << " " << endl;
  cout << "|--------------------------------------------------------------------- " << endl;
}
int main()
{
  char yesNo;
  cout << "if you want to create marksheet then press 'Y' otherwise 'N' : ";
  cin >> yesNo;
  if (yesNo == 'y' || yesNo == 'Y')
  {
    take_input();
  }
  else
  {
    exit(0);
  }
  loading();
  get_output();
  cout<<endl<<endl<<endl <<endl<<endl;
  cout<<"This project is Created By : Prashant Tanwar BCA 1st year"<<endl;
  cin.ignore();
  cout << "Press any key to exit... ";
  cin.get();
  return 0;
}