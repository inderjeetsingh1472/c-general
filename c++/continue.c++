#include <iostream>
using namespace std;
int main() 
{
    int poketmoney;
    poketmoney=3000;
    for (int i = 0;
         i <= 30; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        if (poketmoney==0)
        {
            break;
        }
        cout << " today i allow to go out of home" <<i<< endl;
        poketmoney=poketmoney-300;
    }
    return 0;
}