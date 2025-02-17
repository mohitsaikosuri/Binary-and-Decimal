// Aprogram that converts decimal input to unsigned binary

#include <iostream>
#include <vector>
using namespace std;

int divisionOperation(int num, int div, int& quo, vector<int>& rem);
void reverseArray(vector<int>& rem);
void printArray(vector<int>& rem);

int main()
{
    // assigning values
    int num = 0;
    int div = 2;
    int quo = 1;

    // vector array for remainder or binary values
    vector<int> rem = {};

    // ask for input
    cout << "Enter Number: ";
    cin >> num;

    // call the dicisionAlgorithm function
    divisionOperation(num, div, quo, rem);

    // call the reverseArray function
    reverseArray(rem);

    // call the print array function
    printArray(rem);

    return 0;
}

// takes in values from main and performs the division algorithm and stores the remainder in the array rem[]
int divisionOperation(int num, int div, int& quo, vector<int>& rem)
{
    // division algorithm
    while (num > 0)
    {
        // since rem is a vector int, the only way to store values in it is to use arr.push_back()
        // store remainder values
        rem.push_back(num % 2); 
        // initialize the value of quotient 
        quo = num / 2;
        // new number is current quotient
        num = quo;
    }    
    return quo;
}

// takes the array and reverses it to match the binary output
void reverseArray(vector<int>& rem)
{
    // calculate the size of the array
    int n = rem.size();

    // initialzie a temp value
    vector<int> temp(n);

    for(int i = 0; i < n; i++)
    {
        // put inputsfrom rem to temp temporarily
        temp[i] = rem[n - i - 1];
    }
    for(int i = 0; i < n; i++)
    {
        // store it back in to rem
        rem[i] = temp[i];
    }
}

// prints out reversed array in the desired binary format
void printArray(vector<int>& rem)
{
    for(int i = 0; i < rem.size(); i++)
    {
        cout << rem[i];
    }
}