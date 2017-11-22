#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    int n, element;
    vector<int> origin;
    vector<int> sorted;

    cin >>n;

    for (int i = 0; i < n; i++) {
        cin >> element;
        origin.push_back(element);
        sorted.push_back(element);
    }

    sort(sorted.begin(), sorted.end());
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        if (sorted[i] != origin[i]) cnt++;

        if (cnt > 2)break;
    }

    if (cnt <= 2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

