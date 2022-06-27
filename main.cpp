#include <iostream>
using namespace std;

int main( )
{
    int value1 = 456583;
    int value2 = 598732;
    int value3 = 869534;

    if(value1 > value2)
    {
        if( value1 > value3)
        {
            cout << "value1 is greatest";
        }
        else 
        {
            cout << "value3 is greatest";
        }
    }
    else
    {
        if( value2> value3)
        {
            cout << "value2 is greatest";
        }
        else
        {
            cout << "value3 is greatest";
        }
    }
return 0;
}
