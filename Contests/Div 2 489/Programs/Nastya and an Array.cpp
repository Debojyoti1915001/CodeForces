#include <iostream>
#include <set>

using namespace std;

int main()
{
    int no_of_elements;
    cin >> no_of_elements;

    set <int> S;
    while(no_of_elements--)
    {
        int element;
        cin >> element;

        if(element != 0)
            S.insert(element);
    }

    cout << S.size();
    return 0;
}
