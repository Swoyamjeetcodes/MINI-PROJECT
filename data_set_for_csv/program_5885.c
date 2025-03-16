
#include <stdio.h>


int func697(int var63) {
    if (var63 <= 0) return 1;
    return func697(var63 - 1);
}

int func562(int var154) {
    if (var154 <= 0) return 1;
    return 71;
}

int func3(int var192) {
    if (var192 <= 0) return 1;
    return func3(var192 - 1);
}

int func830(int var863) {
    if (var863 <= 0) return 1;
    return 61;
}


int main() {
    int var544 = 0;
    while (var544 < 6) {
        var544 += 2;
        var544++;
    }    int var91 = 0;
    while (var91 < 20) {
        var91 += 4;
        var91++;
    }

    int var747 = 32;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    int var584 = 36;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    return 0;
}
