// TOOP Array In class Exercise
// 3/c Giselle Johnson
// 10-03-23

#include <iostream>

using namespace std;

// function to change to 1876
int change(int array[], int num){
    array[num-1] = 1876;
}

int main(){
    // create array of numbers/years
    int array[22];
    for (int i =0; i < 22; i++){
        array[i] = i + 2001;
    }
    
    // get number from user
    int num;
    cout << "Enter a number between 1 and 22: ";
    cin >> num;
    if (num >= 1 && num <=22){
        cout << "Before changed: " << array[num-1] << "\n";

        // Call other function
        change(array, num);

        // Print after being changed
        cout << "After it has been changed: " << array[num-1] << "\n";
    }
    else
    cout << "Error, entered invalid number \n";

    

    return 0;
}