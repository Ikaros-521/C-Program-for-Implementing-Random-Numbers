#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // �����������
    int x,y;
    cout << "�˳������� x~x+abs(y-1) �������" << endl;
    while(1)
    {
        cout << endl << "��Сֵ:";
        cin >> x;
        cout << "ƫ��ֵ:";
        cin >> y;
        if(y == 0)
        {
            cout << "ƫ��ֵ����Ϊ0" << endl;
            continue;
        }
        cout << rand()%(y)+x << endl; // x~x+abs(y-1)
    }
    return 0;
}
