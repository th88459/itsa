#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    int num;  
    double Armstrong, a, b, c;  
    while(cin >> num)  
    {  
        a = floor(num / 100);  
        b = num / 10 % 10;     
        c = num % 10;          
        Armstrong = a*a*a+b*b*b+c*c*c; 
        if(num == Armstrong)  
        {  
            cout << "Yes" << endl;  
        }  
        else  
        {  
            cout << "No" << endl;  
        }  
    }  
    return 0;  
}  