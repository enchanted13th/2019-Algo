#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

int wordCnt;

int compare (const void *, const void *);
int main() {
    cin >> wordCnt;
    char wordList[wordCnt][51];
    for (int i = 0; i < wordCnt; i++) {
        cin >> wordList[i];
    }

    qsort(wordList, wordCnt, sizeof(wordList[0]), compare);

    for (int i = 0; i < wordCnt; i++) {
        if (!strcmp(wordList[i], wordList[i + 1]))
            continue;
        cout << wordList[i] << endl;
    }

    return 0;
}

int compare(const void *a, const void *b){
    int a_len;
    int b_len;
    a_len = strlen((char *) a);
    b_len = strlen((char *) b);

    if (a_len == b_len) {
        return strcmp((char *) a, (char *) b);
    }else if (a_len > b_len) {
        return 1;
    }else {
        return -1;
    }
}