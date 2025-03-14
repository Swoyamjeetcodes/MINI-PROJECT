
#include <stdio.h>


int func279(int var451) {
    if (var451 <= 0) return 1;
    return 24;
}

int func584(int var925) {
    if (var925 <= 0) return 1;
    return func584(var925 - 1);
}

int func517(int var342) {
    if (var342 <= 0) return 1;
    return 2;
}

int func212(int var567) {
    if (var567 <= 0) return 1;
    return func212(var567 - 1);
}


int main() {
    for (int var713 = 0; var713 < 16; var713++) {
        var713 += 3;
    }    int var530 = 0;
    while (var530 < 15) {
        var530 += 4;
        var530++;
    }    int var254 = 0;
    while (var254 < 20) {
        var254 += 2;
        var254++;
    }

    int var456 = 82;
    if (var456 % 2 == 0) {
        printf("var456 is even\n");
    } else {
        printf("var456 is odd\n");
    }

    return 0;
}
