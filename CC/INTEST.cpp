#include <iostream>

using namespace std;

int main() {
    long n, k, count = 0;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        long ti;
        cin >> ti;

        if(ti % k == 0)
            count++;
    }

    cout << count;
    return 0;
}