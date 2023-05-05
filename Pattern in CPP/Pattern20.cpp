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
            col = col + 1;
        }
        int star = n - row + 1;
        while (star)
        {
            cout << "*";
            star -= 1;
        }
        cout << endl;
        row++;
    }
}
