#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // �����������
    cout << "�˳������� 0~abs(x-1) �������" << endl;
    while(1)
    {
        int x;
        cout << endl << "����x:";
        cin >> x;
        if(x == 0)
        {
            cout << "x����Ϊ0" << endl;
            continue;
        }

        cout << rand()%(x) << endl; // 0~abs(x-1)
    }

    return 0;
}
