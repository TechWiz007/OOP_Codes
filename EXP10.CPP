#include <iostream.h>
#include <string.h>
#include <conio.h>

class product {
int prod_id;
char prod_name[20];
float prod_price;
public:
product() {
prod_id = 1;
strcpy(prod_name, "Dairy Milk");
prod_price = 200;
}
product(int x, char y[20], float z) {
prod_id = x;
strcpy(prod_name ,y);
prod_price = z;
}
product(product &p1) {
prod_id = p1.prod_id;
strcpy(prod_name, p1.prod_name);
prod_price = p1.prod_price;
}
void showdata() {
cout<<"Product ID: "<<prod_id<<endl;
cout<<"Product Name: "<<prod_name<<endl;
cout<<"Product Cost: "<<prod_price<<endl;
}
};

void main() {
clrscr();
product p1;
product p2(2,"dkitkat", 120);
product p3(p2);
p1.showdata();
p2.showdata();
p3.showdata();
getch();
}