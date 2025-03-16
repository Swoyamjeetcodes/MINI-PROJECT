
#include <stdio.h>


int func725(int var998) {
    if (var998 <= 0) return 1;
    return func725(var998 - 1);
}

int func383(int var10) {
    if (var10 <= 0) return 1;
    return 99;
}

int func942(int var671) {
    if (var671 <= 0) return 1;
    return 71;
}


int main() {
    for (int var704 = 0; var704 < 18; var704++) {
        var704 += 3;
    }

    int var145 = 15;
    if (var145 % 2 == 0) {
        printf("var145 is even\n");
    } else {
        printf("var145 is odd\n");
    }

    return 0;
}
