#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(void)
{
    system("cls");
    
    float num_1, num_2;

    cout << "Digite um numero: ";

    cin >> num_1;

    cout << "\nDigite outro numero: ";

    cin >> num_2;


    cout << "\n*****Calculos aritimeticos*****\n\n";

    cout << num_1 << " + " << num_2 << " = " << num_1 + num_2 << endl;

    cout << num_1 << " - " << num_2 << " = " << num_1 - num_2 << endl;

    cout << num_1 << " * " << num_2 << " = " << num_1 * num_2 << endl;

    cout << num_1 << " / " << num_2 << " = " << num_1 / num_2 << endl;

    cout << num_1 << " resto da divisao por " << num_2 << " = " << fmod(num_1, num_2) << endl << endl;

    return 0;
}
