#include <iostream>
using namespace std;

class Calculator {
public:
    int a, b;

    Calculator(int a_val, int b_val)
    {
    	this->a = a_val ;
    	this->b = b_val ;
	}

    void addition() {
        cout << "Your Addition Of A And B Is : " << a + b << endl;
    }

    void subtraction() {
        cout << "Your Subtraction Of A And B Is : " << a - b << endl;
    }

    void multiplication() {
        cout << "Your Multiplication Of A And B : " << a * b << endl;
    }

    void division() {
        if (b != 0)
            cout << "Your Division Of A And B : " << a / b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }

    void modulus() {
        if (b != 0)
            cout << "Your Modulus Of A And B : " << a % b << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
};

int main() {
    int a, b;
    while (true) {
        cout << "Enter The Value Of A : ";
        cin >> a;
        cout << "Enter The Value Of B : ";
        cin >> b;

        Calculator calc(a, b);

        cout << "Press 1 For Addition........." << endl;
        cout << "Press 2 For Subtraction........." << endl;
        cout << "Press 3 For Multiplication........." << endl;
        cout << "Press 4 For Division........." << endl;
        cout << "Press 5 For Modulus........." << endl;
        cout << "Press 0 For Exit........." << endl;
        cout << "Enter Your Choice: ";
        int choice;
        cin >> choice;

        switch (choice) {
            case 0:
                cout << "Exiting The Program..........." << endl;
                return 0;
            case 1:
                calc.addition();
                break;
            case 2:
                calc.subtraction();
                break;
            case 3:
                calc.multiplication();
                break;
            case 4:
                calc.division();
                break;
            case 5:
                calc.modulus();
                break;
            default:
                cout << "Enter Valid Choice........." << endl;
        }
        cout << endl ;
        system("PAUSE");
        system("CLS");
    }
    return 0;
}