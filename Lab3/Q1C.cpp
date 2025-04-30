// //Assignment 1C
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
    string author;

protected:
    float Price;

public:
    string publisher;

    Book() {
        author = "Peter";
    }

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book b;
    b.displayAuthorInfo();

    return 0;
}