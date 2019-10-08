#include <iostream>
#include <cstdlib>
#include <ctime>
#include <set>
using namespace std;

int main()
{
    //cout << "s:" << s.size() << endl;

    srand((int)time(0));  // 产生随机种子
    int x,y,n;
    cout << "此程序会输出abs(n)个 不重复的 x~x+abs(y-1) 的随机数" << endl;
    while(1)
    {
        set<int> s; // 使用模板库的set来做到去重
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
        if(y < n)
        {
            cout << "偏移值不能小于需要的随机数的个数" << endl;
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
