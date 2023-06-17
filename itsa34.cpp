#include <iostream>  
#include <iomanip>  
#include <math.h>  
  
using namespace std;  
  
int main() {  
    int x, y;  
    double money;  
    while(cin >> x >> y)  
    {  
        if(x >= 0 && x <= 60)  
        {  
            money = x * y;  
            cout << fixed << setprecision(1) << money << endl;  
        }  
        else if(x > 60 && x <= 120)  
        {  
            money = 60 * y + ((x-60) * y * 1.33);  
            cout << fixed << setprecision(1) << money << endl;  
        }  
        else if(x > 120)  
        {  
            money = 60 * y + 60 * y * 1.33 + ((x-120) * y * 1.66);  
            cout << fixed << setprecision(1) << money << endl;  
        }  
    }  
    return 0;  
}  