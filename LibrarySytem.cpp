#include <iosteam>
using namespace std;
using string;


class Book {
    private:
    string Title;
    string Author;
    string ISBN;
    bool Status;

    Book(string title, string author, string isbn, bool status){
        Tittle = title;
        Author = author;
        ISBN = isbn;
        Status = status;
    }

    void display() {
     cout << "Title: " << Tittle << endl; 
     cout << "Author: "<< Author << endl;
     cout << "International Standard Book Number: "<< ISBN << endl;
     cout<< "Status: " << Status << endl;
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
    string Name;
    string Address;
    string Phone;
    int ID;
    list <Books> Books;

    Member( string name, string address, string phone, int id, int books){
        Name = name;
        Address = address;
        Phone = phone;
        ID = id;
        Books = books;

    }

    void displayMembers() {
        cout << "Name: " << Name << endl;
        cout << "Address: " << Address << endl;
        cout << "Phone: " << Phone << endl;
        cout << "ID: " << ID << endl;
        cout << "Books: " << Books << endl;
    }
};

int main(){

    retun 0;
}

