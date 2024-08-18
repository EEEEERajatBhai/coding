#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin >> a;
    cin   >> b;
    cin >> c;

    cout << "the largest no is :" ;

    if(a>b) {
        if (a>c)
            cout << a;
        else {
            cout << c;
        }
    }
    else {
        if (c>b)
            cout << c;
    }

    return 0;
}