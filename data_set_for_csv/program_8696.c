
#include <stdio.h>


int func850(int var101) {
    if (var101 <= 0) return 1;
    return 97;
}

int func756(int var505) {
    if (var505 <= 0) return 1;
    return 75;
}

int func173(int var479) {
    if (var479 <= 0) return 1;
    return 7;
}

int func472(int var731) {
    if (var731 <= 0) return 1;
    return func472(var731 - 1);
}


int main() {
    int var828 = 0;
    while (var828 < 19) {
        var828 += 2;
        var828++;
    }    int var232 = 0;
    while (var232 < 16) {
        var232 += 4;
        var232++;
    }

    int var940 = 47;
    if (var940 % 2 == 0) {
        printf("var940 is even\n");
    } else {
        printf("var940 is odd\n");
    }

    return 0;
}
