#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<vector<int>> ring = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
    

    while (t--)
    {
        int total_points = 0;
        vector<vector<char>> input(10, vector<char>(10));
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> input[i][j];
                if (input[i][j] == 'X')
                {
                    total_points += ring[i][j];
                }
            }
        }
        cout << total_points << endl;
    }

    return 0;
}