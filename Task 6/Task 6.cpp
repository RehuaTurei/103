#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
    int size, matrix, i, largest, small;
    float number[100], average = 0.0, total = 0.0;
    cout << "Enter Matrix size: ";
    cin >> size;


    //Loop to make sure the user inputs numbers above 0 and below 101
    while (size > 100 || size <= 0) {
        cout << "Error please enter number 1-100\n" << "Please enter again: ";
        cin >> size;
    }

    //Collecting Matrix Values
    for (matrix = 0; matrix < size; ++matrix) {
        cout << "Enter Matrix number " << matrix + 1 << ": ";
        cin >> number[matrix];
    }
    
    //Loop for finding average
    for (i = 0; i < size; ++i) {
        total += number[i];
    }

    //Finding Largest Number
    largest = number[0];
    for (i = 1; i < size; i++)
    {
        //if the number in first matrix is higher than the previous it will execute the loop
        if (largest < number[i])
            largest = number[i];
    }

    //Finding smallest Number
    small = number[0];
    for (i = 1; i < size; i++)
    {
        if (small > number[i])
            small = number[i];
    }

    average = total / size;

    cout << "Average number is: " << average << endl;
    cout << "Largest  number is: " << largest << endl;
    cout << "Smallest  number is: " << small;

    return 0;

}