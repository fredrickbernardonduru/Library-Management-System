#include <iosteam>
using namespace std;
using string;


class Book {
    private:
    string Title;
    string Author;
    string Publisher;
    int Year;

    Book(string title, string author, string publisher, int year){
        Tittle = title;
        Author = author;
        Publisher = publisher;
        Year = year;
    }

    void display() {
     cout << "Title: " << Tittle << endl; 
     cout << "Author: "<< Author << endl;
     cout << "Publisher: "<< Publisher << endl;
     cout<< "Year: " << Year << endl;
    }
};

class Library {
    private:
    Book Books[100];
    int Count;

    Library(string books, int count){
        Books = book;
        Count = count;
    }

    void addBook(Book book){
        Books[Count] = book;
        Count++;
    }



    
    };

class Member {
    private:
    string name;
    string address;
    string phone;
    int id;
    int books[3];
};

int main(){

    retun 0;
}

