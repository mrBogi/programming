#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

    ifstream f1;
    ofstream f3;

int main()
{
    setlocale(LC_ALL, "Russian");
    string a = "abcdefghijklmnopqrstuvwxyz", b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", c = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя", d = "АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯ", str; int k;

    cout << "Если вы хотите зашифровать файл, то введите 1. Если хотите расщифровать, то введите 2.    ";
    int number;
    cin >> number;

    switch (number)
    {
    case 1:
        {
            cout << "Введите название файла (с расширением) для шифрования: ";
            char filesh[50], filede[50];
            cin >> filesh;
            f1.open(filesh);
            if (!f1.is_open())
            {
                cout << "Неверно указан путь.";
            }
            else
            {
                cout << endl << "Введите название создаваемого файла: ";
                cin >> filede;
                f3.open(filede);
                cout << endl << "Введите ключ: ";
                cin >> k;
                while (getline(f1,str))
                {
                    for (int i = 0; i < str.length(); i++)
                    {
                        for (int j = 0; j <= 25; j++)
                        {
                            if (str[i] == a[j])
                            {
                                str[i] = a[(j+k)%26];
                                break;
                            }
                            if (str[i] == b[j])
                            {
                                str[i] = b[(j+k)%26];
                                break;
                            }
                        }
                        for (int j = 0; j <= 32; j++)
                        {
                            if (str[i] == c[j])
                            {
                                str[i] = c[(j+k)%33];
                                break;
                            }
                            if (str[i] == d[j])
                            {
                                str[i] = d[(j+k)%33];
                                break;
                            }
                        }
                    }
                    cout << str << endl;
                    f3 << str << endl;
                }
                break;
            }
        }
    case 2:
        {
            cout << "Введите название файла (с расширением) для дешифровки: ";
            char filesh[50], filede[50];
            cin >> filesh;
            f1.open(filesh);
            if (!f1.is_open())
            {
                cout << "Неверно указан путь.";
            }
            else
            {
                cout << endl << "Введите название создаваемого файла: ";
                cin >> filede;
                f3.open(filede);
                cout << endl << "Введите ключ: ";
                cin >> k;
                while (getline(f1,str))
                {
                    for (int i = 0; i < str.length(); i++)
                    {
                        for (int j = 0; j <= 25; j++)
                        {
                            if (str[i] == a[j])
                            {
                                str[i] = a[(j-k)%26];
                                break;
                            }
                            if (str[i] == b[j])
                            {
                                str[i] = b[(j-k)%26];
                                break;
                            }
                        }
                        for (int j = 0; j <= 32; j++)
                        {
                            if (str[i] == c[j])
                            {
                                str[i] = c[(j-k)%33];
                                break;
                            }
                            if (str[i] == d[j])
                            {
                                str[i] = d[(j-k)%33];
                                break;
                            }
                        }
                    }
                    f3 << str << endl;
                }
                break;
            }
        }
    default:
        cout << endl << "Следует ввести цифры 2 или 1." << endl;
    }

    f1.close();
    f3.close();


    return 0;
}

