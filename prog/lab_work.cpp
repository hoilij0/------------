#include <cstdio>
using namespace std;
int a3() {
    int c, kol = 0;
    while ((c = getchar()) != '.') {
        if (c == 'a') kol++;
    }
    return kol;
}

int b3() {
    int c, kol = 0;
    while ((c = getchar()) != 'u') {
        if (c == 'e') kol++;
    }
    return kol;
}

int c3() {
    int c, kol = 0;
    while ((c = getchar()) != EOF) {
        if (c == 'e') kol++;
    }
    return kol;
}