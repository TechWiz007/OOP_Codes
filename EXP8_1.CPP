#include <iostream.h>
#include <conio.h>

class swap {
int x, y;
public:
void getdata() {
cout<<"Enter 1st number: "<<endl;
cin>>x;
cout<<"Enter 2nd number: "<<endl;
cin>>y;
}
swap friend logic(swap);
void putdata() {
cout<<"Values after swapping are: "<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y;
}
};
swap logic(swap s3) {
int temp;
temp = s3.x;
s3.x = s3.y;
s3.y = temp;
return s3;
}

void main() {
swap s, s1;
clrscr();
s.getdata();
s1 = logic(s);
s1.putdata();
getch();
}
