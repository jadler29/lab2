#include "eecs230.h"

//
// Lab 2 programs
//

int illegalStatements() {
    /* Start here! */
    //int double = 0;
    //double char = 2.5;
    //char mychar = 'd'; mychar += 12;
    //unsigned int a = -1;
    //int pi = 3.14;
    //short num = 1e9;
    //string mystring = 5;
    return 0;
}
void even() {

    int oddeven;
    cin >> oddeven;

    if (oddeven%2)
    {
        cout << "odd" ;
    }
    else
    {
        cout << "even";
    }

}

void calc()
{
    string operation;
    double first;
    double second;
    cin >> operation >> first >> second;

    if(operation == "+")
    {
        cout << (first+second);
    }
    if(operation == "-")
    {
        cout << (first - second);
    }
    if(operation == "*")
    {
        cout << (first*second);
    }
    if(operation == "")
    {
        cout << (first/second);
    }

}

void friends()
{
string friend_gender;
    enum friend_gender {male, female};
    string friend_name;

}


int main() {

    cout << "Start with Exercise 1 (legal/illegal statements)" << endl;
    cout << "Then work on the exercises and code them up." << endl;
   // even();
    calc();

}



