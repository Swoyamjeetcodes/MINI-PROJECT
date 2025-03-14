
#include <stdio.h>


int func720(int var292) {
    if (var292 <= 0) return 1;
    return 61;
}

int func635(int var710) {
    if (var710 <= 0) return 1;
    return func635(var710 - 1);
}

int func778(int var84) {
    if (var84 <= 0) return 1;
    return 48;
}

int func505(int var147) {
    if (var147 <= 0) return 1;
    return func505(var147 - 1);
}

int func531(int var342) {
    if (var342 <= 0) return 1;
    return 69;
}


int main() {
    for (int var770 = 0; var770 < 14; var770++) {
        var770 += 2;
    }    for (int var223 = 0; var223 < 8; var223++) {
        var223 += 1;
    }    for (int var555 = 0; var555 < 18; var555++) {
        var555 += 1;
    }

    int var622 = 92;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
