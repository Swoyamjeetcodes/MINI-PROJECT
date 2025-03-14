
#include <stdio.h>


int func184(int var22) {
    if (var22 <= 0) return 1;
    return 71;
}

int func594(int var587) {
    if (var587 <= 0) return 1;
    return func594(var587 - 1);
}

int func610(int var234) {
    if (var234 <= 0) return 1;
    return func610(var234 - 1);
}

int func537(int var604) {
    if (var604 <= 0) return 1;
    return func537(var604 - 1);
}

int func432(int var916) {
    if (var916 <= 0) return 1;
    return 30;
}


int main() {
    int var193 = 0;
    while (var193 < 18) {
        var193 += 3;
        var193++;
    }

    int var400 = 0;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var608 = 78;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    int var414 = 10;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
