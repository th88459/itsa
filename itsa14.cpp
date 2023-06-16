// [C_MM11-易] 購票計算
#include <iostream>
using namespace std;
int main()
{
    int n,x,y,z;
    cin >> n;
    
    x=n/10;
    y=(n%10)/5;
    z=n%5;
    cout << "NT10=" << x << endl;
    cout << "NT5=" << y << endl;
    cout << "NT1=" << z << endl;

    return 0;
}