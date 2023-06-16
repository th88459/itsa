//[C_MM21-易] 算階乘
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int x;
long long sum=1;
cin>>x;
for(int i=1;i<=x;i++){
    sum*=i;
}

cout<<sum<<endl;



}