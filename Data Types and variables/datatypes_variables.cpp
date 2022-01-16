#include<iostream>
using namespace std;

int main(){

    int a = 5;
    cout << "Value of a is : " << a << "\n";
    cout << "Size of a is : " << sizeof(a) << " bytes" << endl;

    char b = 'm' ;
    cout << "Value of b is : " << b << endl;
    cout << "Size of b is : " << sizeof(b) << " bytes" <<  endl;

    float c = 1.25;
    cout << "Value of c is : " << c << endl;
    cout << "Size of c is : " << sizeof(c) << " bytes" << endl;

    bool d = false;
    cout << "Value of d is : " << d << endl;
    cout << "Size of d is : " << sizeof(d) << " byte" << endl;

    double e = 2.1154;
    cout << "Value of e is : " << e << endl;
    cout << "Size of e is : " << sizeof(e) << " bytes" << endl;

    int f = -2;
    cout << "Value of e is : " << f << endl;
    cout << "Size of e is : " << sizeof(f) << " bytes" << endl;


}