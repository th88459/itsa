//題目2. 英哩轉公里
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int x;
	while(cin>>x)
	{
		cout<<fixed<<setprecision(1)<<(x*1.6L*10/10)<<endl;
	}
	return 0;
}