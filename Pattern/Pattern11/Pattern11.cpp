#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        

        while (col <= n)
        {
            char ch = ('A' + col - 1);
            cout << ch;
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}
