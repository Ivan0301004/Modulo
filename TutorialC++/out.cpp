#include <iostream>
#include <string>
using namespace std;


int main()
{
    int age;
    string name;

    cout << "Enter yout name and your age: ";
    getline(cin, name); cin >> age;   

    cout << "Hello " << name << " you are " << age << " Years old " << endl;


    
    return 0;
}
           