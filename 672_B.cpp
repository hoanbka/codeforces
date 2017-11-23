// Different is Good
#include<iostream>
#include<map>
using namespace std;

string a;
int cnt[30];

int main() {
    int n;
    cin>>n;
    cin>>a;
    if (a.length() > 26) cout << "-1";
    else {
        for (int i = 0; i < a.length(); i++) {
            cnt[a[i] - 'a']++;
        }
        int ans = 0;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 1) {
                ans += cnt[i] - 1;
            }
        }
        cout << ans;
    }

    return 0;
}