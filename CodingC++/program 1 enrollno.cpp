#include<iostream>
using namespace std;

int main()
{
int enrollment_no = 0;
char name[100];
char catagory [50];
char address [50];
    cout << "Enter the name , enrollment no, catagory and address city ";
      
cin >> name;
cin   >> enrollment_no;
cin >> catagory;
cin  >> address ;
 cout << "entered details are " ;
  cout <<"name :" << name;  
  cout << "enrollment_no :"<< enrollment_no; 
  cout <<"catagory :" << catagory ; 
  cout <<"address :" << address ;
    return 0;
}

/* write a c program to scan and print 
name , enrollme and address */