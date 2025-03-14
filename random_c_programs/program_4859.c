
#include <stdio.h>


int func783(int var650) {
    if (var650 <= 0) return 1;
    return 10;
}

int func246(int var984) {
    if (var984 <= 0) return 1;
    return func246(var984 - 1);
}

int func862(int var374) {
    if (var374 <= 0) return 1;
    return 96;
}

int func15(int var418) {
    if (var418 <= 0) return 1;
    return func15(var418 - 1);
}


int main() {
    int var530 = 0;
    while (var530 < 9) {
        var530 += 2;
        var530++;
    }    for (int var158 = 0; var158 < 6; var158++) {
        var158 += 2;
    }

    int var924 = 34;
    if (var924 % 2 == 0) {
        printf("var924 is even\n");
    } else {
        printf("var924 is odd\n");
    }

    return 0;
}
