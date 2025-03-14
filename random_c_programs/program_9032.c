
#include <stdio.h>


int func715(int var970) {
    if (var970 <= 0) return 1;
    return 5;
}

int func782(int var137) {
    if (var137 <= 0) return 1;
    return 26;
}

int func798(int var230) {
    if (var230 <= 0) return 1;
    return func798(var230 - 1);
}

int func652(int var959) {
    if (var959 <= 0) return 1;
    return func652(var959 - 1);
}


int main() {
    int var60 = 0;
    while (var60 < 5) {
        var60 += 2;
        var60++;
    }

    int var16 = 62;
    if (var16 % 2 == 0) {
        printf("var16 is even\n");
    } else {
        printf("var16 is odd\n");
    }

    int var338 = 19;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    int var109 = 30;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    return 0;
}
