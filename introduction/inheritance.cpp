#include<iostream>

using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout<< "The chef makes chicken" << endl;

        }
        void makeSalad(){
            cout << "The chef makes salad" << endl;

        }
        void makeSpecialDish(){
            cout << "The chef makes bbq ribs" << endl;
        }
};

class ItalianChef : public Chef{ //inheritance - inheritting an attribute from the mother class
    public:
        void makePaste(){
            cout << "The chef makes pasta" << endl;
        }
        void makeSpecialDish(){
            cout << "The chef makes chicken porn" << endl;
        }
};



int main(){

    Chef chef;
    chef.makeSpecialDish();

    ItalianChef italianChef;
    italianChef.makeSpecialDish();


    return 0;
}
