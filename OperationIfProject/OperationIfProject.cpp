#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    /*
    double time;
    cout << "input time: ";
    cin >> time;

    if (time >= 8 && time < 20)
    {
        // true
        cout << "you luck\n";
    }
    else
    {
        // false
        cout << "you looser\n";
    }
    */

    /*
    double a, b, c;
    cout << "input a, b, c: ";
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        cout << "x1 = " << (-b + sqrt(D)) / 2 / a << "\n";
        cout << "x2 = " << (-b - sqrt(D)) / 2 / a << "\n";
    }
    else
    {
        if (D == 0)
        {
            cout << "x = " << -b / 2 / a << "\n";
        }
        else
        {
            cout << "not roots\n";
        }
    }
    */

    /*
    int xRook, yRook; // координаты ладьи
    int xBishop, yBishop; // координаты слона

    int xPiece, yPiece; // координаты фигуры

    cout << "Введите координаты ладьи:\n";
    cout << "столбец: ";
    cin >> xRook;
    cout << "строка: ";
    cin >> yRook;

    cout << "Введите координаты фигуры:\n";
    cout << "столбец: ";
    cin >> xPiece;
    cout << "строка: ";
    cin >> yPiece;

    if (xRook == xPiece || yRook == yPiece)
        cout << "Ладья бьет фигуру\n";
    else
        cout << "Ладья не бьет фигуру\n";


    cout << "Введите координаты слона:\n";
    cout << "столбец: ";
    cin >> xBishop;
    cout << "строка: ";
    cin >> yBishop;
    cout << "Введите координаты фигуры:\n";
    cout << "столбец: ";
    cin >> xPiece;
    cout << "строка: ";
    cin >> yPiece;

    if (abs(xBishop - xPiece) == abs(yBishop - yPiece))
    {
        cout << "Слон бьет фигуру\n";
    }
    else
    {
        cout << "Слон не бьет фигуру\n";
    }
    */

    int month;
    cin >> month;

    switch (month) 
    {
    case 1: 
        cout << "январь\n"; 
        break;
    case 2: 
        cout << "февраль\n"; 
        break;
    case 3: 
        cout << "март\n";
        break;
    case 4: cout << "апрель\n"; break;
    case 5: cout << "май\n"; break;
    case 6: cout << "июнь\n"; break;
    case 7: cout << "июль\n"; break;
    case 8: cout << "август\n"; break;
    case 9: cout << "сентябрь\n"; break;
    case 10: cout << "октябрь\n"; break;
    case 11: cout << "ноябрь\n"; break;
    case 12: cout << "декабрь\n"; break;
    default: cout << "неправильный номер месяца\n";
    }

    switch (month)
    {
    case 1:
    case 2:
    case 12: cout << "зима\n"; break;
    case 3:
    case 4:
    case 5: cout << "весна\n"; break;
    case 6:
    case 7:
    case 8: cout << "лето\n"; break;
    case 9:
    case 10:
    case 11: cout << "осень\n"; break;
    default: cout << "неправильный номер месяца\n";
    }

    int a, b;
    char sign;

    cout << "input operands: ";
    cin >> a >> b;

    cout << "input operator: ";
    cin >> sign;

    cout << a << " " << sign << " " << b << " = ";
    switch (sign)
    {
    case '+': cout << a + b << "\n"; break;
    case '-': cout << a - b << "\n"; break;
    case '*': cout << a * b << "\n"; break;
    case '/': cout << (double)a / b << "\n"; break;
    default:
        break;
    }

    int n;
    cout << "input n: ";
    cin >> n;

    if (n % 2 == 0)
        cout << "even\n";
    else
        cout << "odd\n";

    (n % 2 == 0) ? cout << "even\n" : cout << "odd\n";

    (n % 2) ? cout << "odd\n" : cout << "even\n";

    cout << ((n % 2) ? "odd" : "even") << "\n";
    
}
