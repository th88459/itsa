// [C_MM26-易] 輸出 1*1、2*2、...、N*N之結果
#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for(int i=1; i<=x; i++)
        cout << i << "*" << i << "=" << i*i << endl;

    return 0;
}