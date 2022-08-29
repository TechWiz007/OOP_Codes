#include <iostream.h>
#include <conio.h>
class Book {
char book_name[20];
char author[20];
float price;
public:
void accept() {
cout<<"Enter the details of the book: \n";
cout<<"Enter name of the book: ";
cin>>book_name;
cout<<"Enter name of the author: ";
cin>>author;
cout<<"Enter price of the book: ";
cin>>price;
}
void display(Book b1) {
if (price>b1.price) {
cout<<"The book with maximum price is: ";
cout<<"Book name: "<<book_name<<endl;
cout<<"Author: "<<author<<endl;
cout<<"Price: "<<price<<endl;
}
else {
cout<<"The book with maximum price is: ";
cout<<"Book name: "<<b1.book_name<<endl;
cout<<"Author: "<<b1.author<<endl;
cout<<"Price: "<<b1.price<<endl;
}
}
};
void main() {
Book b,b1;
clrscr();
b.accept();
b1.accept();
b.display(b1);
getch();
}
