// [C_MM09-易] 計算 i 次方的值
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
int x,y;
cin>>x;
if(x>31)
cout<<"Value of more than 31"<<endl;
else{
y=pow(2,x);
cout<<y<<endl;
}
return 0;
}