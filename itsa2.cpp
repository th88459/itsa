// 題目3. 判斷座標是否在圓形的範圍內
#include<iostream>
using namespace std;

int main()
{
	int x=0,y=0;
	while(cin>>x>>y)
	{
		if(x*x+y*y <= 10000) {
        cout<<"inside"<<endl;
        }
		else{

        cout<<"outside"<<endl;
        }
	}

	return 0;
} 