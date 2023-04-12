#include<iostream>

using namespace std;

class Book {//specification or blueprint of an object
    public:
        string title;//attribs
        string author;//atrribs
        int pages;//attribs
        Book(string name){
            cout << "Creating Book: " << name <<endl;
        }
};

int main()
{
    
    Book book1("Lord of the Rings");// an object that has actual attributes
    book1.title = "LOTD" ;
    book1.author = "AKo";
    book1.pages = 5000;

    Book book2("Hamlet");// an object that has actual attributes
    book2.title = "Hamlet";
    book2.author = "lebron";
    book2.pages = 300;

    cout << book2.pages;
    

    return 0;
}