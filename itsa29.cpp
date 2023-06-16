// [C_MM38-易] 判斷3整數是否能構成三角形之三邊長
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(x+y>z && x+z>y && y+z>x)
        cout << "fit" << endl;
    else
        cout << "unfit" << endl;

    return 0;
}