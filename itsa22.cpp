//[C_MM25-易] 計算正整數被3整除之數值之總和 
#include <iostream>
using namespace std;
int main(){
    int x,sum=0;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(i%3==0)
            sum+=i;
    }
    cout<<sum<<endl;
}