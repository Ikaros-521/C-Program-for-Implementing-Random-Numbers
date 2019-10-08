#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子
    cout << "此程序会输出 0~abs(x-1) 的随机数" << endl;
    while(1)
    {
        int x;
        cout << endl << "输入x:";
        cin >> x;
        if(x == 0)
        {
            cout << "x不能为0" << endl;
            continue;
        }

        cout << rand()%(x) << endl; // 0~abs(x-1)
    }

    return 0;
}
