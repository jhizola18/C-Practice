#include<iostream>
using namespace std;

int main(){

    int arraySize, arrayCont;

    cout << "Enter the size of array: ";
    cin >> arraySize;

    //create/declare array that can hold n numbers of integers and assign to array pointer
    int *arr = new int(arraySize);

    cout<< "Enter " << arraySize << " items\n";

    //loop through the created array to input an element inside it
    for(int arrayCont = 0; arrayCont < arraySize; arrayCont++){
        cin >> arr[arrayCont];
    }

    cout << "The Content of your array is->";
    
    //loop throuh the array to print the elements inside the array
    for(int arrayCont = 0; arrayCont < arraySize; arrayCont++){
        cout << arr[arrayCont] <<" ";
    }

    //loop through the array to add all the elements
    int result = 0;
    for(int arrayCont = 0; arrayCont < arraySize; arrayCont++){
        result = arr[arrayCont] + result;
    }
    cout << "\nAdding all Elements in array: " << result;
    
   
    return 0;
}