#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    
    //ввод числа пользователем
    double num1, num2, res;
    char a;
    cout << "Введите первое число" << endl;
    cin >> num1;
    cout << "Введите второе число" << endl;
    cin >> num2;
    cout << "Введите действие(+,-,/,*)" << endl;
    cin >> a;

    //вычисление
    if (a == '+') {            //"+"
        res = num1 + num2;
        cout << "Ответ:" << res;
    }
    else if(a=='-'){           //"-"
        res = num1 - num2;
        cout << "Ответ:" << res;
    }
    else if (a == '/') {       //"/"
        res = num1 / num2;
        cout << "Ответ:" << res;
    }
    else if (a == '*') {       //"*"
        res = num1 * num2;
        cout << "Ответ:" << res;
    }
    else
        cout << "Вы ввели некорректные данные";

    return 0;
}