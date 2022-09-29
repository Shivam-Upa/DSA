// 1234
//  234
//   34
//    4

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
            col++;
        }
        int star = n - row + 1;
        int val = col - row + 1;
        while (star)
        {

            cout << val;
            val++;
            star--;
        }

        cout << endl;
        row = row + 1;
    }
}