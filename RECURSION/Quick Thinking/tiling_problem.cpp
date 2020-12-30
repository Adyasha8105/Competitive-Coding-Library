#include <iostream>
using namespace std;

//PLace the tiles
// Give a wall of size of 4 x N, and tiles of size (1,4) and (4,1)
// In how many ways you can build the wall?

int getNoOfWays(int n)
{
    // Base case
    if (n == 0)
        return 0;
    if (n <= 3)
    {
        return 1;
    }
    return getNoOfWays(n - 1) + getNoOfWays(n - 4);
}

// Driver Function
int main()
{
    cout << getNoOfWays(4) << endl;
    return 0;
}
