#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子
    int x,y,n;
    cout << "此程序会输出abs(n)个 x~x+abs(y-1) 的随机数" << endl;
    while(1)
    {
        cout << endl << "输出几个随机数:";
        cin >> n;
        if(n < 0)
        {
            n = 0-n;
        }
        cout << "最小值:";
        cin >> x;
        cout << "偏移值:";
        cin >> y;
        if(y == 0)
        {
            cout << "偏移值不能为0" << endl;
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
