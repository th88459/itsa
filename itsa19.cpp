// [C_MM31-易] 計算1~N內能被2跟3整除，但不能被12整除的整數總和
#include <iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cin >> x;
    for(int i=1; i<=x; i++)
    {
        if(i%6==0 && i%12!=0)
            sum+=i;
    }
    cout << sum << endl;

    return 0;
}