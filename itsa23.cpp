// [C_MM34-易] 因數問題
#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    for(int i=1;i<=x;i++){
        if(x%i==0){
            if(i==1)
            cout<<i;
            else
            cout<<" "<<i;
        }
    }
    cout<<endl;

}