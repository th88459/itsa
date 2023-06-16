// 題目7. 複數運算
#include<iostream>
using namespace std;

int main()
{
	int x=0;
	
	cin>>x;
	while(x--) 
	{
		int ai,a,bi,b;
		char y; 
		
		cin>>y>>ai>>a>>bi>>b;
		switch(y--) 
		{ 
			case '+':
            cout<<ai+bi<<" "<<a+b<<endl;
            break;
			case '-':
            cout<<ai-bi<<" "<<a-b<<endl;
            break;
			case '*':
            cout<<ai*bi-a*b<<" "<<a*bi+ai*b<<endl;
            break;
			case '/':
            cout<<(ai*bi+a*b)/(bi*bi+b*b)<<" "<<a*bi-ai*b/(bi*bi+b*b)<<endl;
            break;
		}
	}
	return 0;
} 