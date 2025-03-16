
#include <stdio.h>


int func601(int var630) {
    if (var630 <= 0) return 1;
    return func601(var630 - 1);
}

int func779(int var330) {
    if (var330 <= 0) return 1;
    return 60;
}

int func237(int var720) {
    if (var720 <= 0) return 1;
    return 39;
}

int func965(int var179) {
    if (var179 <= 0) return 1;
    return func965(var179 - 1);
}

int func206(int var818) {
    if (var818 <= 0) return 1;
    return 80;
}


int main() {
    int var222 = 0;
    while (var222 < 13) {
        var222 += 5;
        var222++;
    }

    int var895 = 20;
    if (var895 % 2 == 0) {
        printf("var895 is even\n");
    } else {
        printf("var895 is odd\n");
    }

    int var164 = 83;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    int var304 = 34;
    if (var304 % 2 == 0) {
        printf("var304 is even\n");
    } else {
        printf("var304 is odd\n");
    }

    return 0;
}
