#include<iostream>
using namespace std;

class Book
{
    const int ID;
    string title;
    const string AUTHOR;
    const int PAGES;
    const int YEAR;
    double price;

public:
    Book() : ID(1), AUTHOR("123"), PAGES(100), YEAR(2020)
    {
        title = " ";
        price = 0;
    }

    Book(int id, string t, string author, int pages, int year, double pr): ID(id), AUTHOR(author), PAGES(pages), YEAR(year), price(pr), title(t)
    {
    }

    void showInfo()
    {
        cout << "ID: " << ID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << AUTHOR << endl;
        cout << "Pages: " << PAGES << endl;
        cout << "Year: " << YEAR << endl;
        cout << "Price: " << price << endl;
        cout << endl;
    }

    void changePrice(double newPrice)
    {
        price = newPrice;
    }

    bool isModernBook()
    {
        return YEAR > 2015;
    }

    void discount(double percent)
    {
        price = price - price * percent / 100;
    }
};

int main()
{
    Book book1;
    Book book2(2, "AAAA", "!@!@!@", 123, 2009, 12012);
    Book book3(3, "A12AAA", "!@12!@!@", 1232, 2029, 1201122);
    book1.showInfo();
    book2.showInfo();
    book3.showInfo();
    book2.changePrice(12);
    book2.showInfo();
    book3.discount(50);
    book3.showInfo();
    
}