#include <iostream>
using namespace std;

int addNumbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

int main()
{
    int first_number  {12};
    int second_number  {9};
    int sum = first_number + second_number;
    cout << "Sum : " << sum << endl;

    // sum = addNumbers(first_number, second_number);
    sum = addNumbers(4, 6);

    cout << "The sum of  numbers is: " << sum << endl;

    sum = addNumbers(9 , 56);
    cout << "The sum of  2 numbers is: " << sum << endl;

    cout << "Sum of two numbers is : " << addNumbers(57, 89) << endl;
    return 0;
}




