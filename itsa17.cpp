//[C_MM27-易] 計算兩整數間所有整數的總和
#include <iostream>

using namespace std;
int main()
{
    int a,b,t,sum=0;
    cin >> a >> b;
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
    }
    for(int i=a; i<=b; i++)
        sum+=i;
    cout << sum << endl;

    return 0;
}