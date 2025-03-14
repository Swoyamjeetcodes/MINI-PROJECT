
#include <stdio.h>


int func175(int var1) {
    if (var1 <= 0) return 1;
    return 6;
}

int func424(int var652) {
    if (var652 <= 0) return 1;
    return func424(var652 - 1);
}

int func793(int var406) {
    if (var406 <= 0) return 1;
    return 96;
}

int func574(int var694) {
    if (var694 <= 0) return 1;
    return func574(var694 - 1);
}

int func828(int var673) {
    if (var673 <= 0) return 1;
    return func828(var673 - 1);
}


int main() {
    for (int var169 = 0; var169 < 6; var169++) {
        var169 += 1;
    }

    int var882 = 92;
    if (var882 % 2 == 0) {
        printf("var882 is even\n");
    } else {
        printf("var882 is odd\n");
    }

    return 0;
}
