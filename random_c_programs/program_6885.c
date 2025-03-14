
#include <stdio.h>


int func457(int var221) {
    if (var221 <= 0) return 1;
    return 15;
}

int func209(int var253) {
    if (var253 <= 0) return 1;
    return 32;
}

int func169(int var882) {
    if (var882 <= 0) return 1;
    return 81;
}

int func180(int var568) {
    if (var568 <= 0) return 1;
    return func180(var568 - 1);
}

int func990(int var587) {
    if (var587 <= 0) return 1;
    return 56;
}

int func907(int var121) {
    if (var121 <= 0) return 1;
    return 95;
}


int main() {
    int var84 = 0;
    while (var84 < 16) {
        var84 += 4;
        var84++;
    }    int var13 = 0;
    while (var13 < 14) {
        var13 += 5;
        var13++;
    }    for (int var305 = 0; var305 < 8; var305++) {
        var305 += 5;
    }    int var477 = 0;
    while (var477 < 13) {
        var477 += 3;
        var477++;
    }

    int var846 = 48;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}
