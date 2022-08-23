#include <iostream.h>
#include <conio.h>

class circle {
float radius, area;
public:
void getdata() {
cout<<"Enter the value of radius: ";
cin>>radius;
}
void calculate();
void display();
}A1;
void circle::calculate() {
area = 3.14 * radius * radius;
}
void circle::display() {
cout<<"The area of the circle is: "<<area;
}
void main() {
cout<<"This program was developed by Bhargav Gajare \n";
clrscr();
A1.getdata();
A1.calculate();
A1.display();
getch();
}