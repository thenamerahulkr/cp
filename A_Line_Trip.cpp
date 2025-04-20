#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void min_fuel_capacity(int t, vector<pair<int, int>> &cases, vector<vector<int>> &stations) {
    for (int i = 0; i < t; i++) {
        int n = cases[i].first, x = cases[i].second;
        vector<int> stops = {0}; // Start at 0

        // Add all stations
        stops.insert(stops.end(), stations[i].begin(), stations[i].end());

        // Add the final destination x
        stops.push_back(x);

        // Add return journey (stations in reverse order)
        reverse(stations[i].begin(), stations[i].end());
        for (int j = 0; j < n; j++) {
            stops.push_back(stations[i][j]);
        }

        // Add back to start
        stops.push_back(0);

        // Calculate the maximum gap
        int max_gap = 0;
        for (size_t j = 1; j < stops.size(); j++) {
            max_gap = max(max_gap, stops[j] - stops[j - 1]);
        }

        cout << max_gap << endl;
    }
}

int main() {
    int t;
    cin >> t;
    
    vector<pair<int, int>> cases(t);
    vector<vector<int>> stations(t);
    
    for (int i = 0; i < t; i++) {
        int n, x;
        cin >> n >> x;
        cases[i] = {n, x};

        stations[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> stations[i][j];
        }
    }

    min_fuel_capacity(t, cases, stations);
    return 0;
}
