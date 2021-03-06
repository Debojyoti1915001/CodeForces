#include <iostream>
 
using namespace std;
 
int main()
{
    int no_of_columns;
    cin >> no_of_columns;
    
    long long black = 0, white = 0;
    for(int i = 1; i <= no_of_columns; i++)
    {
        int no_of_rows;
        cin >> no_of_rows;
        
        black += (no_of_rows/2) + (no_of_rows%2 == 1 && i%2 == 0);
        white += (no_of_rows/2) + (no_of_rows%2 == 1 && i%2 == 1);
    }
    
    long long dominos = min(black, white);
    cout << dominos << "\n";
    
    return 0;
}
