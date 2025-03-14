
#include <stdio.h>


int func961(int var4) {
    if (var4 <= 0) return 1;
    return 74;
}

int func445(int var893) {
    if (var893 <= 0) return 1;
    return func445(var893 - 1);
}

int func962(int var77) {
    if (var77 <= 0) return 1;
    return func962(var77 - 1);
}

int func734(int var588) {
    if (var588 <= 0) return 1;
    return 68;
}

int func476(int var932) {
    if (var932 <= 0) return 1;
    return func476(var932 - 1);
}


int main() {
    int var232 = 0;
    while (var232 < 5) {
        var232 += 3;
        var232++;
    }

    int var336 = 8;
    if (var336 % 2 == 0) {
        printf("var336 is even\n");
    } else {
        printf("var336 is odd\n");
    }

    int var110 = 5;
    if (var110 % 2 == 0) {
        printf("var110 is even\n");
    } else {
        printf("var110 is odd\n");
    }

    int var160 = 27;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
