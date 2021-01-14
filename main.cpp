#include <iostream>
#include "lib.h"

using namespace std;

int main(){

complex a,b;

a.real = 1;
a.imaginary = 1;
b.real = 10;
b.imaginary = 10;


cout << a << " + " << b << " = " << a + b << endl;
cout << a << " - " << b << " = " << a - b << endl;
cout << a << " * " << b << " = " << a * b << endl;
cout << a << " / " << b << " = " << a / b << endl;



return 0;

}