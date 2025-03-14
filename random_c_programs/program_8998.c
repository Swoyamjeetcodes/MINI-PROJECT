
#include <stdio.h>


int func103(int var896) {
    if (var896 <= 0) return 1;
    return func103(var896 - 1);
}

int func380(int var354) {
    if (var354 <= 0) return 1;
    return func380(var354 - 1);
}

int func621(int var816) {
    if (var816 <= 0) return 1;
    return func621(var816 - 1);
}

int func246(int var315) {
    if (var315 <= 0) return 1;
    return func246(var315 - 1);
}

int func152(int var75) {
    if (var75 <= 0) return 1;
    return 11;
}

int func736(int var937) {
    if (var937 <= 0) return 1;
    return func736(var937 - 1);
}

int func20(int var381) {
    if (var381 <= 0) return 1;
    return 13;
}


int main() {
    for (int var63 = 0; var63 < 10; var63++) {
        var63 += 5;
    }    int var129 = 0;
    while (var129 < 17) {
        var129 += 4;
        var129++;
    }    for (int var179 = 0; var179 < 16; var179++) {
        var179 += 1;
    }

    int var614 = 52;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    int var241 = 11;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    int var763 = 48;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    int var397 = 8;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    int var469 = 58;
    if (var469 % 2 == 0) {
        printf("var469 is even\n");
    } else {
        printf("var469 is odd\n");
    }

    return 0;
}
