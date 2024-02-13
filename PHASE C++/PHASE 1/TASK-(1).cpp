#include <iostream>
using namespace std;

class Cube
{
    private:
        float num;

    public:
        Cube()
        {
            cout << "Enter Number To Convert Cube : ";
            cin >> this->num;
        }
        void getCube()
        {
            cout << "Tell Meena Your Cube Number Is : " << this->num * this->num * this->num << endl;
        }
};

int main()
{
    Cube num_1;

    num_1.getCube();

    return 0;
}