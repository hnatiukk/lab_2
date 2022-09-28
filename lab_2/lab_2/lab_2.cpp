// Програма, що обчислює площу круга

#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float radius, area;
    cout << "Введіть радіус круга: ";
    cin >> radius;
    area = pow(radius, 2) * 3.14;
    cout << "Площа круга радіусом " << radius << " дорівнює " << area;
}