
#include <stdio.h>


int func668(int var13) {
    if (var13 <= 0) return 1;
    return 80;
}

int func22(int var6) {
    if (var6 <= 0) return 1;
    return func22(var6 - 1);
}

int func16(int var314) {
    if (var314 <= 0) return 1;
    return func16(var314 - 1);
}

int func428(int var778) {
    if (var778 <= 0) return 1;
    return func428(var778 - 1);
}


int main() {
    int var489 = 0;
    while (var489 < 10) {
        var489 += 2;
        var489++;
    }

    int var143 = 15;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    int var539 = 14;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    return 0;
}
