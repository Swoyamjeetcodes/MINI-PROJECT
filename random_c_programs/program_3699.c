
#include <stdio.h>


int func162(int var81) {
    if (var81 <= 0) return 1;
    return func162(var81 - 1);
}

int func726(int var3) {
    if (var3 <= 0) return 1;
    return func726(var3 - 1);
}

int func128(int var342) {
    if (var342 <= 0) return 1;
    return 85;
}

int func539(int var976) {
    if (var976 <= 0) return 1;
    return 65;
}

int func621(int var936) {
    if (var936 <= 0) return 1;
    return 56;
}


int main() {
    for (int var901 = 0; var901 < 8; var901++) {
        var901 += 1;
    }    for (int var370 = 0; var370 < 7; var370++) {
        var370 += 5;
    }

    int var759 = 47;
    if (var759 % 2 == 0) {
        printf("var759 is even\n");
    } else {
        printf("var759 is odd\n");
    }

    int var827 = 21;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    return 0;
}
