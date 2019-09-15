#include <iostream>
using namespace std;

int main() {
    int testCnt;
    cin >> testCnt;
    for (int i = 0 ; i < testCnt; i++) {
        int a, b, c;
        cin >> a >> b;
        cout << "Case #" << (i + 1) << ": " << a << " + " << b << " = " << (a + b) << endl;
    }
    return 0;
}