#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a = 0, sum = 0, c = 0, temp = 0, Hi=0,Rev = 0;
    cout<< "Enter A:";
    cin >> a;
    temp = a;
    
    while (temp != 0) {
        c = temp % 10;
        sum = sum + c;
        temp = temp / 10;
      Rev = Rev * 10 + c;
      
    }

    cout << "sum = " << sum << "\n" << endl;
  cout << "Reverse = " << Rev << "\n" << endl;
  if (a == Rev ){

    cout << "Palindrome" << "\n" << endl;
  }
    return 0;
}