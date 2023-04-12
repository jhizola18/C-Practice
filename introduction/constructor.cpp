#include<iostream>

using namespace std;

class Book {//specification or blueprint of an object
    public:
        string title;//attribs
        string author;//atrribs
        int pages;//attribs
        Book(){
            title = "no title";
            author =  "no author";
            pages = 0;
        }
        Book(string atitle, string aAuthor, int aPages){//constructor, this will run everytime you create object from this blueprint
            title = atitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    
    Book book1("Lord of the Rings", "LEroy", 700);// an object that has actual attributes
    Book book2("Hamlet", "Ako",500);// an object that has actual attributes
    Book book3;

    cout << book2.pages;
    

    return 0;
}