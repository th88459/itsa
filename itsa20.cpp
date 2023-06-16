// [C_MM40-易] 1~N之間的總和
#include <iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cin >> x;
    for(int i=1; i<=x; i++)
    {
        
        sum+=i;
        if(i==1)
        cout<<i<<" ";
        else
        cout<<"+ "<<i<<" ";
    }
    cout << "= "<<sum << endl;

    return 0;
}