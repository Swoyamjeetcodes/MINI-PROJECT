
#include <stdio.h>


int func629(int var662) {
    if (var662 <= 0) return 1;
    return 48;
}

int func976(int var647) {
    if (var647 <= 0) return 1;
    return 6;
}

int func835(int var332) {
    if (var332 <= 0) return 1;
    return 72;
}

int func603(int var876) {
    if (var876 <= 0) return 1;
    return func603(var876 - 1);
}

int func829(int var327) {
    if (var327 <= 0) return 1;
    return 3;
}


int main() {
    for (int var756 = 0; var756 < 5; var756++) {
        var756 += 2;
    }    for (int var35 = 0; var35 < 9; var35++) {
        var35 += 1;
    }

    int var590 = 27;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
