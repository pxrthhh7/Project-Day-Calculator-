#include <iostream>
using namespace std;

int add(int a, int b)
{
    cout << "Addition of " << a << " and " << b << " is : " << a + b << endl;
    cout << "------------------------------" << endl;
}
int sub(int a, int b)
{
    cout << "Subtraction of " << a << " and " << b << " is : " << a - b << endl;
    cout << "------------------------------" << endl;
}
int mul(int a, int b)
{
    cout << "Multiplication of " << a << " and " << b << " is : " << a * b << endl;
    cout << "------------------------------" << endl;
}
float divi(float a, float b)
{
    cout << "Division of " << a << " and " << b << " is : " << a / b << endl;
    cout << "------------------------------" << endl;
}
int mod(int a, int b)
{
    cout << "Mod of " << a << " and " << b << " is : " << a % b << endl;
    cout << "------------------------------" << endl;
}

int main()
{
    int user, a, b;

    do
    {
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for the exit" << endl;
        cout << "Enter Your Choice : ";
        cin >> user;

        cout << "------------------------------" << endl;

        if (user >= 1 && user <= 5)
        {
            cout << "Enter the first number : ";
            cin >> a;
            cout << "Enter the Second number : ";
            cin >> b;
        }

        switch (user)
        {
        case 1:
            add(a, b);
            break;
        case 2:
            sub(a, b);
            break;
        case 3:
            mul(a, b);
            break;
        case 4:
            divi(a, b);
            break;
        case 5:
            mod(a, b);
            break;
        case 0:
            cout << "Thank You For Using Our Calculator !";
            break;

        default:
            cout << "Invalid Input !" << endl;
            cout << "Please Enter a Value Between 0 to 5" << endl;
            cout << "------------------------------" << endl;
            break;
        }
    } while (user != 0);
}