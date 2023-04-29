#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    int col = 1;

    while (row <= n)
    {
        int space = 0;
        int star = 0;
        while (space<col)
        {
            cout<<" ";
            space++;
        }
        while (star<n)
        {
            cout<<"*";
            star++;
        }
        
        
        cout << endl;
        --n;
        row = row + 1;
        col = col +1;
    }
}
