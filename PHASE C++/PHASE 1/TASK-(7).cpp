#include<iostream>
using namespace std;

class Avradge {
    private:
        float a,b,c;

    public:
        Avradge()
        {
            cout << "Enter The First Value : " ;
            cin >> this->a ;
            cout << "Enter The Second Value : " ;
            cin >> this->b ;
            cout << "Enter The Third Value : " ;
            cin >> this->c ;
        }
        void getAvradge()
        {
            cout << "Tell Priyank Your Avradge Number Is : " << (this->a + this->b + this->c ) / 3 << endl ;
        }
};

int main()
{

    Avradge number_1;

    number_1.getAvradge();


    return 0;
}