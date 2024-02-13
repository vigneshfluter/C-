#include <iostream>
using namespace std;

void factorial(int f, int l){

    int i,sum;
    
    if(f<l)
	{
	    for(i=f;i<=l;i++)
		{
	        sum=sum*i;
	    }
    	cout<< "factorial is number is ="<<sum;
	}
	else
	{
		cout<<"cannot give factorial number";
	}
}

int main() {
    int f, l;
    cout << "Enter the first number = ";
    cin >> f;
    cout << "Enter the last number = ";
    cin >> l;

    factorial(f, l);

    return 0;
}

