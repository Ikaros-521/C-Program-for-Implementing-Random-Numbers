#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // �����������
    int x,y,n;
    cout << "�˳�������abs(n)�� x~x+abs(y-1) �������" << endl;
    while(1)
    {
        cout << endl << "������������:";
        cin >> n;
        if(n < 0)
        {
            n = 0-n;
        }
        cout << "��Сֵ:";
        cin >> x;
        cout << "ƫ��ֵ:";
        cin >> y;
        if(y == 0)
        {
            cout << "ƫ��ֵ����Ϊ0" << endl;
            continue;
        }
        for(int i=0; i<n; i++)
        {
            cout << rand()%(y)+x << " "; // x~x+abs(y-1)
        }
        cout << endl;
    }
    return 0;
}
