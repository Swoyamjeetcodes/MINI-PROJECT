
#include <stdio.h>


int func624(int var379) {
    if (var379 <= 0) return 1;
    return func624(var379 - 1);
}

int func977(int var971) {
    if (var971 <= 0) return 1;
    return 11;
}


int main() {
    int var647 = 0;
    while (var647 < 8) {
        var647 += 4;
        var647++;
    }    int var635 = 0;
    while (var635 < 11) {
        var635 += 3;
        var635++;
    }

    int var342 = 68;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    int var179 = 11;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    return 0;
}
