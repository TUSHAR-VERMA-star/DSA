#include <iostream>
using namespace std;

class first
{
public:
    int val1;
    int val2;
    ~first()
    {
    }
    bool operator==(first const &a)
    {

        if ((val1 == a.val1) && (val2 = a.val2))
        {
            return true;
        }
        return false;
    }
};

int main()
{
    first x;
    first y;
    x.val1 = 10;
    x.val2 = 20;
    y.val1 = 20;
    y.val2 = 20;
    
    if (x == y)
    {
        cout << "Same";
    }
    else
    {
        cout << "Not Same";
    }
}