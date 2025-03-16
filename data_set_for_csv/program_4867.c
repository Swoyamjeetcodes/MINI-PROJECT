
#include <stdio.h>


int func823(int var489) {
    if (var489 <= 0) return 1;
    return 20;
}

int func151(int var551) {
    if (var551 <= 0) return 1;
    return func151(var551 - 1);
}


int main() {
    for (int var594 = 0; var594 < 14; var594++) {
        var594 += 3;
    }    for (int var483 = 0; var483 < 9; var483++) {
        var483 += 5;
    }

    int var7 = 30;
    if (var7 % 2 == 0) {
        printf("var7 is even\n");
    } else {
        printf("var7 is odd\n");
    }

    return 0;
}
