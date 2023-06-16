// [C_MM04-易] 計算總和、乘積、差、商和餘數
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int x,y;
while(cin>>x>>y){

    cout<<x<<"+"<<y<<"="<<x+y<<endl; 
    cout<<x<<"*"<<y<<"="<<x*y<<endl;
    cout<<x<<"-"<<y<<"="<<x-y<<endl;
    if(x<0)
    cout<<x<<"/"<<y<<"="<<(x/y)-1<<"..."<<((x%y)+y)<<endl;
    else
    cout<<x<<"/"<<y<<"="<<x/y<<"..."<<x%y<<endl;
}
}