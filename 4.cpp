#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
using namespace std;

int main()
{
    //cout << "s:" << s.size() << endl;

    srand((int)time(0));  // �����������
    int x,y,n;
    cout << "�˳�������abs(n)�� ���ظ��� x~x+abs(y-1) �������" << endl;
    while(1)
    {
        set<int> s; // ʹ��ģ����set������ȥ��
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
        if(y < n)
        {
            cout << "ƫ��ֵ����С����Ҫ��������ĸ���" << endl;
            continue;
        }
        while(1)
        {
            if(n == s.size())
            {
                //cout << "n:" << n << endl;
                break;
            }
            int size1 = s.size();
            int temp = rand()%(y)+x;
            s.insert(temp);
            int size2 = s.size();
            if(size1 != size2)
            {
                cout << temp << " "; // x~x+abs(y-1)
            }
        }
        cout << endl;
    }
    return 0;
}
