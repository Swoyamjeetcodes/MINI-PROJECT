
#include <stdio.h>


int func732(int var165) {
    if (var165 <= 0) return 1;
    return func732(var165 - 1);
}

int func173(int var767) {
    if (var767 <= 0) return 1;
    return func173(var767 - 1);
}

int func911(int var127) {
    if (var127 <= 0) return 1;
    return 100;
}

int func627(int var555) {
    if (var555 <= 0) return 1;
    return func627(var555 - 1);
}

int func193(int var748) {
    if (var748 <= 0) return 1;
    return func193(var748 - 1);
}

int func417(int var942) {
    if (var942 <= 0) return 1;
    return 46;
}

int func707(int var36) {
    if (var36 <= 0) return 1;
    return func707(var36 - 1);
}

int func96(int var385) {
    if (var385 <= 0) return 1;
    return 61;
}

int func253(int var92) {
    if (var92 <= 0) return 1;
    return 12;
}

int func992(int var745) {
    if (var745 <= 0) return 1;
    return func992(var745 - 1);
}


int main() {
    int var636 = 0;
    while (var636 < 19) {
        var636 += 3;
        var636++;
    }

    int var686 = 33;
    if (var686 % 2 == 0) {
        printf("var686 is even\n");
    } else {
        printf("var686 is odd\n");
    }

    return 0;
}
