#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;
    float D , Ans1 , Ans2 ;
       cout << "Enter the no a ,b , c and ax²+bx+c form." << "\n";
    cin >> a;
    cin   >> b;
    cin >> c;
    D =(b*b)-(4*a*c);
    if(D=>0)
    {
    Ans1 =(-b+sqrt(D))/(2*a);
    Ans2 =(-b-sqrt(D))/(2*a);
    cout << Ans1<<"\n" << endl;
      cout << Ans2<<"\n"<< endl;
    }
    else 
    {
    cout << "No has complex roots" << endl;
    }
    return 0;
} 