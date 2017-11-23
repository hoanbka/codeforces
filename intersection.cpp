#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    int len1, len2;
    cin >> len1;
    vector<int> v1, v2;
    int el;

    cout << "Enter vector1: " << endl;
    for (int i = 0; i < len1; i++) {
        cin >> el;
        v1.push_back(el);
    }
    cout << "Enter vector2: " << endl;
    cin >> len2;
    for (int m = 0; m < len2; m++) {
        cin >> el;
        v2.push_back(el);
    }

//    sort(v1.begin(), v1.begin() + len1);
//    sort(v2.begin(), v2.begin() + len2);
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> res;
    int i = 0, j = 0;

    while (i < len1 && j < len2) {
        if (v1[i] < v2[j]) {
            i++;
        } else if (v1[i] > v2[j]) {
            j++;
        } else {
            res.push_back(v1[i]);
            i++;
            j++;
        }
    }

    cout <<"size = "<< res.size()<< endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}
