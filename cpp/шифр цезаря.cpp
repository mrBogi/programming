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
    string a = "abcdefghijklmnopqrstuvwxyz", b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ", c = "��������������������������������", d = "�����Ũ��������������������������", str; int k;

    cout << "���� �� ������ ����������� ����, �� ������� 1. ���� ������ ������������, �� ������� 2.    ";
    int number;
    cin >> number;

    switch (number)
    {
    case 1:
        {
            cout << "������� �������� ����� (� �����������) ��� ����������: ";
            char filesh[50], filede[50];
            cin >> filesh;
            f1.open(filesh);
            if (!f1.is_open())
            {
                cout << "������� ������ ����.";
            }
            else
            {
                cout << endl << "������� �������� ������������ �����: ";
                cin >> filede;
                f3.open(filede);
                cout << endl << "������� ����: ";
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
            cout << "������� �������� ����� (� �����������) ��� ����������: ";
            char filesh[50], filede[50];
            cin >> filesh;
            f1.open(filesh);
            if (!f1.is_open())
            {
                cout << "������� ������ ����.";
            }
            else
            {
                cout << endl << "������� �������� ������������ �����: ";
                cin >> filede;
                f3.open(filede);
                cout << endl << "������� ����: ";
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
        cout << endl << "������� ������ ����� 2 ��� 1." << endl;
    }

    f1.close();
    f3.close();


    return 0;
}

