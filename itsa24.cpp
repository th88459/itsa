// [C_MM19-易] 電話費計算
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int x;
cin>>x;
double sum=0;
if(x<=800)
    sum=x*0.9;
else if(x>800 && x<1500)
    sum=(x*0.9)*0.9;
else if(x>=1500)
    sum=(x*0.9)*0.79;
 cout << fixed << setprecision(1) << sum << endl;
return 0;

}