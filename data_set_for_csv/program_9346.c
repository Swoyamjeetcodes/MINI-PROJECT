
#include <stdio.h>


int func664(int var653) {
    if (var653 <= 0) return 1;
    return func664(var653 - 1);
}

int func36(int var263) {
    if (var263 <= 0) return 1;
    return 26;
}

int func447(int var814) {
    if (var814 <= 0) return 1;
    return 10;
}


int main() {
    for (int var483 = 0; var483 < 13; var483++) {
        var483 += 3;
    }

    int var875 = 43;
    if (var875 % 2 == 0) {
        printf("var875 is even\n");
    } else {
        printf("var875 is odd\n");
    }

    return 0;
}
