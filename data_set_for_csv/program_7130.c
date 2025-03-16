
#include <stdio.h>


int func582(int var919) {
    if (var919 <= 0) return 1;
    return func582(var919 - 1);
}

int func845(int var609) {
    if (var609 <= 0) return 1;
    return func845(var609 - 1);
}


int main() {
    int var839 = 0;
    while (var839 < 5) {
        var839 += 4;
        var839++;
    }

    int var17 = 32;
    if (var17 % 2 == 0) {
        printf("var17 is even\n");
    } else {
        printf("var17 is odd\n");
    }

    int var923 = 58;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    int var94 = 2;
    if (var94 % 2 == 0) {
        printf("var94 is even\n");
    } else {
        printf("var94 is odd\n");
    }

    return 0;
}
