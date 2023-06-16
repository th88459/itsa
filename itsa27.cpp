// [C_MM14-易] 計算時間的組合
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    cout << x/86400<< " days" << endl;
    cout << (x%86400)/3600 << " hours" << endl;
    cout << (x%3600)/60 << " minutes" << endl;
    cout << x%60 << " seconds" << endl;

    return 0;
}