#include <iostream>

using namespace std;

int answer = 999999;

int visited[999][3] = { 0, };

void solution(int X, int cnt);

int main() {
    int X;
    int cnt = 0;

    cin >> X;

    solution(X, cnt);
    solution(X, cnt);
    solution(X, cnt);

    cout << answer << endl;

    return 0;
}

void solution(int X, int cnt) {
    if (X == 1) {
        if (answer > cnt) {
            answer = cnt;
        }
        return;
    }

    if (visited[cnt][0] == 0 && X % 3 == 0) {
        visited[cnt][0] = 1;
        cnt++;
        solution(X/3, cnt);
    }

    if (visited[cnt][1] == 0 && X % 2 == 0) {
        visited[cnt][1] = 1;
        cnt++;
        solution(X/2, cnt);
    }

    if (visited[cnt][2] == 0) {
        visited[cnt][2] = 1;
        cnt++;
        solution(X-1, cnt);
    }

    if (visited[cnt][0] == 0 && visited[cnt][1] == 0 && visited[cnt][2] == 0) {
        return;
    }
}