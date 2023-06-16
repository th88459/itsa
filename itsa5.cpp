// [C_MM01-易] 計算梯型面積
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
double up,down,h;
while(cin>>up>>down>>h){

    cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<((up+down)*h/2*1L)<<endl;
}
}