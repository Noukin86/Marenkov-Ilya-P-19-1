#include "Tasks.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    double R = 1,  x,  y,g,o;
    int q;
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        std::cout << "Введите значениe первой переменной: " << "\n";
        cin >> x;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Число не корректно" << std::endl;
        }
        else { break; }
    }
    while (true)
    {
        std::cout << "Введите значениe второй переменной: " << "\n";
        cin >> y;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Число не корректно" << std::endl;
        }
        else { break; }
    }
    while (true)
    {
        std::cout << "Введите значениe третьей переменной: " << "\n";
        cin >> g;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Число не корректно" << std::endl;
        }
        else { break; }
        
    }
    while (true)
    {
        std::cout << "Введите значениe четвертой переменной: " << "\n";
        cin >> o;
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Число не корректно" << std::endl;
        }
        else { break; }
    }
    Tasks ts;
    std::cout << "Выберите вариант: " << "\n";
    cin >> q;
    switch (q)
    {
    case 1:
        ts.TsOne(R, x, y);
        break;
    case 2:
        ts.TsTwo(R, x, y);
        break;
    case 3:
        ts.TsThree(R, x, y);
        break;
    case 4:
        ts.TsFour(R, x, y);
        break;
    case 5:
        ts.TsFive(R, x);
        break;
    case 6:
        ts.TsSix(R, x, y);
        break;
    case 7:
        ts.TsSeven(R, x);
        break;
    case 8:
        ts.TsEight(R, x);
        break;
    case 9:
        ts.TsNine(R, x, y);
        break;
    case 10:
        ts.TsTen(R, x, y,g);
        break;
    case 11:
        ts.Ts11(R, x, y);
        break;
    case 12:
        ts.Ts12(R, x, y);
        break;
    case 13:
        ts.Ts13(R, x);
        break;
    case 14:
        ts.Ts14(R, x, y);
        break;
    case 15:
        ts.Ts15(R, x);
        break;
    case 16:
        ts.Ts16(R, x);
        break;
    case 17:
        ts.Ts17(R, x);
        break;
    case 18:
        ts.Ts18(R, x);
        break;
    case 19:
        ts.Ts19(R, x, y,g);
        break;
    case 20:
        ts.Ts20(R, x, y,g);
        break;
    case 21:
        ts.Ts21(R, x, y);
        break;
    case 22:
        ts.Ts22(R, x, y,g);
        break;
    case 23:
        ts.Ts23(R, x,y);
        break;
    case 24:
        ts.Ts24(R, x);
        break;
    case 25:
        ts.Ts25(R, x, y);
        break;
    case 26:
        ts.Ts26(R, x);
        break;
    case 27:
        ts.Ts27(R, x, y,g);
        break;
    case 28:
        ts.Ts28(R, x, y);
        break;
    case 29:
        ts.Ts29(R, x);
        break;
    case 30:
        ts.Ts30(R, x, y);
        break;
    case 31:
        ts.Sys(R, x, y,g, o);
        break;
    case 32:
        ts.Sys2(R, x, y, g, o);
        break;
    case 33:
        ts.Sys3(R, x, y, g, o);
        break;
    case 34:
        ts.Sys4(R, x, y, g, o);
        break;
    case 35:
        ts.Sys5(R, x, y, g, o);
        break;
    case 36:
        ts.Sys6(R, x, y, g, o);
        break;
    case 37:
        ts.Sys7(R, x, y, g, o);
        break;
    case 38:
        ts.Sys8(R, x, y, g, o);
        break;
    case 39:
        ts.Sys9(R, x, y, g, o);
        break;
    case 40:
        ts.Sys10(R, x, y, g, o);
        break;
   

  
    default:

        std::cout << "Введено не корректное значение " << "\n";
        break;
    }
  std::system("pause");
}

