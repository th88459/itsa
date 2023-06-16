//[C_MM35-易] 平、閏年判定
#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;


        if(year%400==0&&year%4==0)
            cout << "Bissextile Year" << endl;
        else
            cout << "Common Year" << endl;
    
    return 0;
}