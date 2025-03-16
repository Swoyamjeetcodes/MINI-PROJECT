
#include <stdio.h>


int func605(int var963) {
    if (var963 <= 0) return 1;
    return func605(var963 - 1);
}

int func783(int var885) {
    if (var885 <= 0) return 1;
    return 23;
}

int func872(int var427) {
    if (var427 <= 0) return 1;
    return func872(var427 - 1);
}

int func812(int var636) {
    if (var636 <= 0) return 1;
    return 25;
}


int main() {
    for (int var70 = 0; var70 < 20; var70++) {
        var70 += 2;
    }

    int var838 = 35;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
