﻿// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, m; double n1, n2, n3;
    cin >> a >> b >> c;
    if ((a < (b+c)) && (b < (a+c)) && (c < (b+a))) {
        if ((a == b) || (a == c) || (c == b)) {
            cout << "ravnobedrennyi  " << endl ;
            if (a == b) {
                n1= sqrt((a-1/2*c)*(a+1/2*c));
                cout << " m1=" << n1 ;
               
            }
            else if (a == c) {
                n2= sqrt((a-1/2*b)*(a+1/2*b));
                cout << " m2=" << n2;
            }
            else if (b == c) {
                n3= sqrt((b-1/2*a)*(b+1/2*a));
                cout << " m3=" << n3;
            }
               
        }
        else cout << " ne ravnobedrennyi ";
    }
    else cout << " ne treugolnik ";
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