/*14. Create a class called publication that stores the title (a string) and price (type float) of a
publication. From this class derive two classes: book, which adds a page_count (type int);
and tape, which adds a playing time_in_minutes (type float). Each of the three classes
should have a getdata() function to get its data from the user, and a putdata() function to
display the data.*/

#include <iostream>
#include <string>
using namespace std;

class Publication {
    protected:
        string title;
        float price;

    public:
        void getdata() {
            cout << "Enter title: ";
            cin.ignore();
            getline(cin, title);
            cout << "Enter price: ";
            cin >> price;
        }

        void putdata() const {
            cout << "Title: " << title << endl;
            cout << "Price: " << price << " Rs." << endl;
        }
};

class Book : public Publication {
    private:
        int page_count;

    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter page count: ";
            cin >> page_count;
        }

        void putdata() const {
            Publication::putdata();
            cout << "Page Count: " << page_count << endl;
        }
};

class Tape : public Publication {
    private:
        float playing_time;

    public:
        void getdata() {
            Publication::getdata();
            cout << "Enter playing time (in minutes): ";
            cin >> playing_time;
        }

        void putdata() const {
            Publication::putdata();
            cout << "Playing Time: " << playing_time << " minutes" << endl;
        }
};

int main() {
    Book book;
    Tape tape;

    cout << "Enter data for book:" << endl;
    book.getdata();

    cout << "\nEnter data for tape:" << endl;
    tape.getdata();

    cout << "\nData for book:" << endl;
    book.putdata();

    cout << "\nData for tape:" << endl;
    tape.putdata();

    return 0;
}