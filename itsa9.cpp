// [C_MM05-易] 計算正方形面積 
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
double x;
while(cin>>x){

     cout << fixed << setprecision(1) << round(x*x*10)/10.0 << endl;
}
}