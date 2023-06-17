//[C_MM17-易] 求最大公因數
#include <iostream>    
using namespace std;    
    
int main() {    
    int x, y;    
    while(cin >> x >> y)    
    {    
        if(x > y)     
        {    
            for(int i = x; i >=0 ; i--)    
            {    
                if(y % i == 0 && x % i == 0)    
                {    
                    cout << i << endl;    
                    break;    
                }    
            }    
        }    
        else if(x < y)     
        {    
            for(int i = x; i >=0 ; i--)    
            {    
                if(x % i == 0 && y % i == 0)    
                {    
                    cout << i << endl;    
                    break;    
                }     
            }       
        }    
        else     
        {    
            cout << x << endl;      
        }    
            
    }    
    return 0;    
}  