#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(void)
{
    system("cls");
    
    int a, b;

    cout << "Digite um numero: ";

    cin >> a;

    cout << "\nDigite outro numero: ";

    cin >> b;

    cout << "\n*****Calculos aritimeticos*****\n\n";

    cout << a << " + " << b << " = " << a + b << endl;

    cout << a << " - " << b << " = " << a - b << endl;

    cout << a << " * " << b << " = " << a * b << endl;

    cout << a << " / " << b << " = " << a / b << endl;

    cout << a << " resto da divisao por " << b << " = " << a % b << endl << endl;
    

    return 0;
}
