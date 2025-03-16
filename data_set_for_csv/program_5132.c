
#include <stdio.h>


int func323(int var638) {
    if (var638 <= 0) return 1;
    return 78;
}

int func256(int var916) {
    if (var916 <= 0) return 1;
    return func256(var916 - 1);
}

int func20(int var173) {
    if (var173 <= 0) return 1;
    return func20(var173 - 1);
}

int func577(int var303) {
    if (var303 <= 0) return 1;
    return func577(var303 - 1);
}


int main() {
    int var681 = 0;
    while (var681 < 5) {
        var681 += 1;
        var681++;
    }

    int var263 = 73;
    if (var263 % 2 == 0) {
        printf("var263 is even\n");
    } else {
        printf("var263 is odd\n");
    }

    int var365 = 11;
    if (var365 % 2 == 0) {
        printf("var365 is even\n");
    } else {
        printf("var365 is odd\n");
    }

    int var165 = 98;
    if (var165 % 2 == 0) {
        printf("var165 is even\n");
    } else {
        printf("var165 is odd\n");
    }

    return 0;
}
