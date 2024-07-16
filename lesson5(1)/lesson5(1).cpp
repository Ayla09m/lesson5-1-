#include <iostream>
using namespace std;

int main()
{
    cout << "task2\n";
    int num2;
    cout << "1 ve 20 arasi eded daxil edin:";
    cin >> num2;
    num2 > 1 && num2<20 || cin >> num2;
    (num2 % 2 == 0 && num2 != 2 || num2 % 3 == 0 && num2 != 3 || num2 % 5 == 0 && num2 != 5 || num2 % 7 == 0 && num2 != 7) && cout << "m" || cout << "s" << endl;
    cout << "task3\n";
    int num3;
    cout << "5 reqemli eded daxil edin:";
    cin >> num3;
    num3 >= 10000 && num3 <= 99999 || cin >> num3;
    int o_m = num3 / 10000 % 10;
    int m = num3 / 1000 % 10;
    int y = num3 / 100 % 10;
    int o = num3 / 10 % 10;
    int t = num3 % 10;
    (num3 == o_m + m * 10 + y * 100 + o * 1000 + t * 10000) && cout << "eded polindromdur" || cout << "eded polindrom deyil";
    cout << "\ntask5\n";
    int eded1, eded2, eded3;
    cout << "1 ci ededi daxil edin:";
    cin >> eded1;
    cout << "2 ci ededi daxil edin:";
    cin >> eded2;
    cout << "3 cu ededi daxil edin:";
    cin >> eded3;
    eded1 > eded2&& eded1 > eded3&& cout << "f" || eded2 > eded1 && eded2 > eded3 && cout << "s" || eded3 > eded2 && eded3 > eded1 && cout << "t" || eded1 == eded2 && eded1 == eded3 && eded2 == eded3 && eded1 != 0 && eded2 != 0 && eded3 != 0 && cout << "e" || eded1 == 0 && eded2 == 0 && eded3 == 0 && cout << "n";
    cout << "\ntask6\n";
    int num6;
    cout << "6 reqemli eded daxil edin:";
    cin >> num6;
    num6 >= 100000 && num6 <= 999999 || cin >> num6;
    int yuzmin = num6 / 100000 % 10;
    int onmin = num6 / 10000 % 10;
    int min = num6 / 1000 % 10;
    int yuz = num6 / 100 % 10;
    int on = num6 / 10 % 10;
    int tek = num6 % 10;
    int tek_yer = yuzmin + min + on;
    int cut_yer = onmin + yuz + tek;
    tek_yer > cut_yer&& cout << yuzmin << "," << min << "," << on || cout << onmin << "," << yuz << "," << tek << endl;
}


