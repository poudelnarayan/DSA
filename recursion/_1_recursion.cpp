/*
recursion function -> function called itself

general type:

    Type fun(param){
        if(<<base condition>>){
            1...
            2..fun(param);
            3...

        }
    }

*/

// simpler recursion function

#include <iostream>

using namespace std;

void func(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        func(n - 1);
    }
}

void func2(int n)
{
    if (n > 0)
    {
        func2(n - 1);
        cout << n << endl;
    }
}
int main()
{
    int x = 3;
    func(x);
    cout << "==============" << endl;
    func2(x);

    return 0;
}

/*
There is calling and returning phase in the recursive function

*/