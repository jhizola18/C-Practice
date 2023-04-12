#include<iostream>

using namespace std;

class Student{
    public:
        string name;
        string major;
        double gpa;
    
        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
            cout << "Creating Student Profile: ";
        }

        string hasHonors(){
            if(gpa >= 3.5){
                
                return("Has Honor");
            } else{
                return ("BOBO");
            }

        }
};


int main(){
    string name;
    string major;
    double gpa;
    string alala;
    
    
    cout << "Enter student's name: ";
    getline(cin, name);
    cout << "Enter a major: ";
    getline(cin, major);
    cout << "Enter student's gpa: ";
    cin >> gpa;
    

    Student student1(name, major, gpa);
    cout << student1.name << endl;
    student1.hasHonors();
    
    

    




    return 0;

}