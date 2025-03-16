
#include <stdio.h>


int func491(int var995) {
    if (var995 <= 0) return 1;
    return func491(var995 - 1);
}

int func243(int var187) {
    if (var187 <= 0) return 1;
    return func243(var187 - 1);
}

int func417(int var314) {
    if (var314 <= 0) return 1;
    return 9;
}

int func456(int var208) {
    if (var208 <= 0) return 1;
    return 34;
}

int func500(int var843) {
    if (var843 <= 0) return 1;
    return 90;
}


int main() {
    int var809 = 0;
    while (var809 < 5) {
        var809 += 5;
        var809++;
    }

    int var971 = 66;
    if (var971 % 2 == 0) {
        printf("var971 is even\n");
    } else {
        printf("var971 is odd\n");
    }

    return 0;
}
