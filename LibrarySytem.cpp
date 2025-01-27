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

    string Title;
    string Author;
    string ISBN;
    bool Status;
    cout << "Welcome to the library system" << endl;
    cout << "Please enter the following members details: "<<endl;
    cout << "Name: "<< endl;
    cin >> Name;
    cout << "Address: "<< endl;
    cin >> Address;
    cout << "Phone: "<< endl;
    cin >> Phone;
    cout << "ID: "<< endl;
    cin >> ID;
    cout << "Books: "<< endl;
    cin >> Books;
    Member member1( Name, Address, Phone, ID, Books);

    
    cout << "Please enter the following details: "<<endl;
    cout << "Title: " << endl;
    cin >> Title;
    cout << "Author: " << endl;
    cin >> Author;
    cout << "International Standard Book Number(ISBN): "<< endl;
    cin >> ISBN;
    Cout << "Status:"<<endl;
    cin >> Status;


    Book book1(Title, Author, ISBN, Status);
    retun 0;
}

