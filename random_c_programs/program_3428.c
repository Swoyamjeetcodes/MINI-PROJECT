
#include <stdio.h>


int func319(int var663) {
    if (var663 <= 0) return 1;
    return 84;
}

int func658(int var234) {
    if (var234 <= 0) return 1;
    return func658(var234 - 1);
}

int func194(int var449) {
    if (var449 <= 0) return 1;
    return 22;
}

int func937(int var686) {
    if (var686 <= 0) return 1;
    return func937(var686 - 1);
}

int func431(int var759) {
    if (var759 <= 0) return 1;
    return 14;
}


int main() {
    int var215 = 0;
    while (var215 < 20) {
        var215 += 5;
        var215++;
    }

    int var259 = 1;
    if (var259 % 2 == 0) {
        printf("var259 is even\n");
    } else {
        printf("var259 is odd\n");
    }

    return 0;
}
