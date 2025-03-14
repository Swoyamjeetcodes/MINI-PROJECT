
#include <stdio.h>


int func626(int var745) {
    if (var745 <= 0) return 1;
    return 24;
}

int func759(int var868) {
    if (var868 <= 0) return 1;
    return func759(var868 - 1);
}

int func181(int var694) {
    if (var694 <= 0) return 1;
    return 11;
}

int func820(int var77) {
    if (var77 <= 0) return 1;
    return func820(var77 - 1);
}

int func252(int var283) {
    if (var283 <= 0) return 1;
    return func252(var283 - 1);
}

int func70(int var734) {
    if (var734 <= 0) return 1;
    return func70(var734 - 1);
}

int func611(int var384) {
    if (var384 <= 0) return 1;
    return func611(var384 - 1);
}


int main() {
    for (int var222 = 0; var222 < 13; var222++) {
        var222 += 3;
    }

    int var491 = 54;
    if (var491 % 2 == 0) {
        printf("var491 is even\n");
    } else {
        printf("var491 is odd\n");
    }

    return 0;
}
