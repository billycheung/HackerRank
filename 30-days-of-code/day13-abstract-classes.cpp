/*
Given a Book class and a Solution class, write a MyBook class that does the following:

Inherits from Book
Has a parameterized constructor taking these  parameters:
string title
string author
int price
Implements the Book class' abstract display() method so it prints these  lines:
Title:, a space, and then the current instance's .
Author:, a space, and then the current instance's .
Price:, a space, and then the current instance's .
Note: Because these classes are being written in the same file, you must not use an access modifier (e.g.: ) when declaring MyBook or your code will not execute.
*/

class MyBook: public Book{
    private:
        double price;
    public:
        MyBook(string t, string a, double p) : Book(t, a){
            this->price = p;
        }
        void display(){
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Price: " << price << endl;
        }
};