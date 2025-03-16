
#include <stdio.h>


int func84(int var813) {
    if (var813 <= 0) return 1;
    return func84(var813 - 1);
}

int func694(int var470) {
    if (var470 <= 0) return 1;
    return func694(var470 - 1);
}

int func866(int var75) {
    if (var75 <= 0) return 1;
    return func866(var75 - 1);
}

int func250(int var538) {
    if (var538 <= 0) return 1;
    return func250(var538 - 1);
}


int main() {
    int var187 = 0;
    while (var187 < 5) {
        var187 += 2;
        var187++;
    }

    int var582 = 18;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    int var561 = 77;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    int var66 = 8;
    if (var66 % 2 == 0) {
        printf("var66 is even\n");
    } else {
        printf("var66 is odd\n");
    }

    return 0;
}
