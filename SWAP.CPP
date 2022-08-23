#include <iostream.h>
#include <conio.h>

class student {
int m1,m2;
public:
void getdata(int a,int b) {
m1 = a;
m2 = b;
}
student swap(student t1);
void show() {
cout<<"m1 = "<<m1<<endl;
cout<<"m2 = "<<m2<<endl;
}
};
student student::swap(student t1) {
int temp,temp2;
temp = m1;
m1 = t1.m1;
t1.m1 = temp;
temp2 = m2;
m2 = t1.m2;
t1.m2 = temp2;
return t1;
}
void main() {
student s,s1;
clrscr();
s.getdata(67,78);
s1.getdata(92,84);
cout<<"Object s:"<<endl;
s.show();
cout<<"Object s1:"<<endl;
s1.show();
cout<<"Object s post swap:"<<endl;
s1.show();
cout<<"Object s1 post swap:"<<endl;
s.show();
getch();
}
