// 題目6. 季節判定
#include<iostream>
using namespace std;
int main()
{
	int x;
	
	cin>>x;
        if(x>=3&&x<=5)
		cout<<"Spring"<<endl;
        else if(x>=6&&x<=8) 
		cout<<"Summer"<<endl;
        else if(x>=9&&x<=11)
		cout<<"Autumn"<<endl;
        else
        cout<<"Winter"<<endl;

	return 0;
} 