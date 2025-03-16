
#include <stdio.h>


int func446(int var951) {
    if (var951 <= 0) return 1;
    return 6;
}

int func335(int var413) {
    if (var413 <= 0) return 1;
    return func335(var413 - 1);
}

int func300(int var407) {
    if (var407 <= 0) return 1;
    return func300(var407 - 1);
}

int func550(int var553) {
    if (var553 <= 0) return 1;
    return 68;
}

int func641(int var207) {
    if (var207 <= 0) return 1;
    return func641(var207 - 1);
}


int main() {
    int var855 = 0;
    while (var855 < 5) {
        var855 += 5;
        var855++;
    }    int var31 = 0;
    while (var31 < 9) {
        var31 += 1;
        var31++;
    }

    int var746 = 53;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
