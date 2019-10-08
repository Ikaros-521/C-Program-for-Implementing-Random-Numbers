#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子
    int x,y;
    cout << "此程序会输出 x~x+abs(y-1) 的随机数" << endl;
    while(1)
    {
        cout << endl << "最小值:";
        cin >> x;
        cout << "偏移值:";
        cin >> y;
        if(y == 0)
        {
            cout << "偏移值不能为0" << endl;
            continue;
        }
        cout << rand()%(y)+x << endl; // x~x+abs(y-1)
    }
    return 0;
}
