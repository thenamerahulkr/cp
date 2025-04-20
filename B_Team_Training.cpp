#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_strong_teams(int n, int x, vector<int>& skills) {
    sort(skills.begin(), skills.end());  
    int teams = 0;
    int team_size = 0;
    for (int i = n - 1; i >= 0; i--) {  
        team_size++;  
        if (team_size * skills[i] >= x) {  
            teams++;  
            team_size = 0; 
        }
    }
    return teams;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;  

    while (t--) {
        int n, x;
        cin >> n >> x;  
        vector<int> skills(n);

        for (int i = 0; i < n; i++) {
            cin >> skills[i]; 
        }

        cout << max_strong_teams(n, x, skills) << '\n';
    }

    return 0;
}
