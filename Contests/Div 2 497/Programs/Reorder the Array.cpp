#include <cstdio>
#include <vector>
#include <algorithm>

#define all(v) (v).begin(), (v).end()
using namespace std;

int main()
{
    int no_of_elements;
    scanf("%d", &no_of_elements);

    vector <int> A(no_of_elements + 1, 0);
    for(int i = 1; i <= no_of_elements; i++)
        scanf("%d", &A[i]);

    sort(all(A));

    int no_of_positions = 0;

    int available = no_of_elements;
    for(int i = no_of_elements; i >= 1; i--)
    {
        while(A[available] >= A[i])
            available--;

        if(available > 0)
            available--, no_of_positions++;
    }

    printf("%d\n", no_of_positions);

    return 0;
}
