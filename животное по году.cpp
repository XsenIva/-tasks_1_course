﻿// ConsoleApplication13.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    setlocale(LC_ALL, "Russian");
    cout << " введите год ";
    cin >> a;
    if ((a > 1924) && (a < 2063)) {
        b = (a%100)%12 ;
        switch (b) {
        case 0: cout << " год крысы "; break;
        case 1: cout << " год быка "; break;
        case 2: cout << " год тигр "; break;
        case 3: cout << " год кролик "; break;
        case 4: cout << " год дракон "; break;
        case 5: cout << " год змея  "; break;
        case 6: cout << " год лошадь"; break;
        case 7: cout << " год коза  "; break;
        case 8: cout << " год обезьяна "; break;
        case 9: cout << " год петух"; break;
        case 10: cout << " год собака "; break;
        case 11: cout << " год свинья "; break;
        default: cout << "не опеределено ";
        }
    }
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
