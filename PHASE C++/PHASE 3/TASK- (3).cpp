#include <iostream>
using namespace std;

class Varification
{
    private:
        string id;
        string pass;
        bool deleted;

    public:
        Varification(string id, string pass) : id(id), pass(pass), deleted(false) {};

        bool Compare(string id, string pass)
        {
            return this->id == id && this->pass == pass && !deleted;
        }

        void DeleteAccount()
        {
            deleted = true;
            cout << "Account deleted successfully." << endl;
        }
};

bool validatePassword(string pass)
{
    bool hasUpperCase = false;
    bool hasLowerCase = false;
    bool hasDigit = false;
    bool hasSpecialSymbol = false;

    for (char c : pass)
    {
        if (isupper(c))
            hasUpperCase = true;
        else if (islower(c))
            hasLowerCase = true;
        else if (isdigit(c))
            hasDigit = true;
        else if (ispunct(c))
            hasSpecialSymbol = true;
    }

    return hasUpperCase && hasLowerCase && hasDigit && hasSpecialSymbol;
}

int main()
{
    string id, pass, log_in, log_Password;
    Varification *v = nullptr;

    while (true)
    {
        cout << "Press 1 For Register....." << endl;
        cout << "Press 2 For Login....." << endl;
        cout << "Press 3 For Delete Account....." << endl;
        cout << "Press 0 For Exit The Program....." << endl;
        cout << "Enter Your Choice: ";
        int choice;
        cin >> choice;

        if (choice == 0)
        {
            break;
        }
        else
        {
            switch (choice)
            {
            case 1:
                cout << "Enter Your E-Mail: ";
                cin >> id;
                cout << "Enter Your Password: ";
                cin >> pass;
                if (!validatePassword(pass))
                {
                    cout << "Password does not meet criteria." << endl;
                    break;
                }
                v = new Varification(id, pass);
                cout << "Your Account Created Successfully......." << endl
                     << endl;
                break;

            case 2:
                if (v == nullptr)
                {
                    cout << "No account registered yet." << endl;
                    break;
                }
                cout << "Enter E-mail: ";
                cin >> log_in;
                cout << "Enter Password: ";
                cin >> log_Password;

                if (v->Compare(log_in, log_Password))
                    cout << "Log-In Success." << endl;
                else
                    cout << "Log-in Failed." << endl;
                break;

            case 3:
                if (v == nullptr)
                {
                    cout << "No account registered yet." << endl;
                    break;
                }
                v->DeleteAccount();
                delete v;
                v = nullptr;
                break;

            default:
                cout << "Invalid choice." << endl;
            }
        }
    }

    return 0;
}