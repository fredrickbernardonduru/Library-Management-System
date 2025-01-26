#include <iosteam>
using namespace std;
using string;


class Book {
    private:
    string title;
    string author;
    string publisher;
    int year;
};

class Library {
    private:
    Book books[100];
    int count;
    };

class Member {
    private:
    string name;
    string address;
    string phone;
    int id;
    int books[3];
}



