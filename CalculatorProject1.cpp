/*
 Amy Ghotra
 */

#include <iostream>
using namespace std;

int main()
{
    int number;
    char operators;
    int sum = 0;
    cin >> sum;
    
    while (cin >> operators)
    {
        cin >> number;
        if (operators == '+')
        {
            sum = sum + number;
        }
        else
        {
            sum = sum - number;
        }
    }
    cout << sum << endl;
    
    return 0;
}




/*
 THIS PROGRAM ADDS , BUT INCORRECTLY
int main()
{
        int s;
        int total;
        while(cin >> s) {
                total = total + s;
                cout << " " << total << endl;
            }
            cout << total;
            return 0;
}
*/
