#include <iostream.h>
#include <conio.h>

class Distance {
int meters;
public:
void getdata() {
cout<<"Enter distance in meters: "<<endl;
cin>>meters;
}
void friend logic(Distance, Distance);
};
void logic (Distance d4, Distance d5) {
int temp;
temp = d4.meters + d5.meters;
cout<<"Addition of two distances is: "<<temp<<endl;
}
void main() {
Distance d1, d2;
clrscr();
d1.getdata();
d2.getdata();
logic(d1,d2);
getch();
}