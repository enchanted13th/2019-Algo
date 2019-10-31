#include <iostream>
#include <stdlib.h>
using namespace std;
int pointCnt;
int p[100000][2];
int compare(const void *, const void *);

int main() {
    cin >> pointCnt;
    for (int i = 0; i < pointCnt; i++) {
        cin >> p[i][0] >> p[i][1];
    }
    qsort((void *)p, pointCnt, sizeof(p[0]), compare);
    for (int i = 0; i < pointCnt; i++) {
        cout << p[i][0] << " " << p[i][1] << "\n";
    }
    return 0;
}

int compare(const void *p1, const void *p2) {
    int *n1 = (int *) p1;
    int *n2 = (int *) p2;
    if (*n1 != *n2) return (*n1 - *n2);
    else {
        return (*(n1+1) - *(n2+1));
    }
}