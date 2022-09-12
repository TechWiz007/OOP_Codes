#include <iostream.h>
#include <conio.h>

class Number {
float x, y, add, sub, mult, div;
public:
void getdata() {
cout<<"Enter the value of x: "; cin>>x;
cout<<"Enter the value of y: "; cin>>y;
}
void inline addition() {
add = x + y;
}
void inline subtraction() {
sub = x - y;
}
void inline multiplication() {
mult = x * y;
}
void inline division() {
div = x / y;
}
void showdata() {
cout<<"Sum is: "<<add<<endl;
cout<<"Difference is: "<<sub<<endl;
cout<<"Product is: "<<mult<<endl;
cout<<"Quotient is: "<<div<<endl;
}
}n;
void main() {
clrscr();
n.getdata();
n.addition();
n.subtraction();
n.multiplication();
n.division();
n.showdata();
getch();
}

