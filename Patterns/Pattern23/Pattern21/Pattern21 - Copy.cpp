#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << " ";
            col += 1;
        }
        int space = n - row + 1;
        while (space)
        {
            cout << row;
            space -= 1;
        }
        cout << endl;
        row = row + 1;
    }
}