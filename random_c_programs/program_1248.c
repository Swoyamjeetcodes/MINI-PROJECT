
#include <stdio.h>


int func475(int var338) {
    if (var338 <= 0) return 1;
    return func475(var338 - 1);
}

int func24(int var157) {
    if (var157 <= 0) return 1;
    return func24(var157 - 1);
}


int main() {
    int var674 = 0;
    while (var674 < 11) {
        var674 += 3;
        var674++;
    }    for (int var982 = 0; var982 < 7; var982++) {
        var982 += 1;
    }

    int var658 = 6;
    if (var658 % 2 == 0) {
        printf("var658 is even\n");
    } else {
        printf("var658 is odd\n");
    }

    return 0;
}
