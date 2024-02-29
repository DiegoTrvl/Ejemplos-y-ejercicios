#include "iostream"
#include "cmath"
using namespace std;
int main() {

    int radio, volumen;
    const float PI = 3.14159;

    cout << "intrese el radio: ";
    cin >> radio;

    volumen = (4 * PI * pow(radio, 3)) / 3;
    cout << "El volumen es: " << volumen;

    return 0;

}