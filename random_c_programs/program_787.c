
#include <stdio.h>


int func654(int var210) {
    if (var210 <= 0) return 1;
    return func654(var210 - 1);
}

int func961(int var396) {
    if (var396 <= 0) return 1;
    return func961(var396 - 1);
}

int func684(int var872) {
    if (var872 <= 0) return 1;
    return func684(var872 - 1);
}

int func349(int var91) {
    if (var91 <= 0) return 1;
    return 12;
}

int func383(int var919) {
    if (var919 <= 0) return 1;
    return func383(var919 - 1);
}


int main() {
    int var897 = 0;
    while (var897 < 6) {
        var897 += 2;
        var897++;
    }    int var409 = 0;
    while (var409 < 11) {
        var409 += 3;
        var409++;
    }

    int var392 = 82;
    if (var392 % 2 == 0) {
        printf("var392 is even\n");
    } else {
        printf("var392 is odd\n");
    }

    return 0;
}
