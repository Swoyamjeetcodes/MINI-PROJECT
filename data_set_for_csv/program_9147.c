
#include <stdio.h>


int func1(int var368) {
    if (var368 <= 0) return 1;
    return func1(var368 - 1);
}

int func597(int var361) {
    if (var361 <= 0) return 1;
    return func597(var361 - 1);
}

int func123(int var769) {
    if (var769 <= 0) return 1;
    return 85;
}

int func47(int var290) {
    if (var290 <= 0) return 1;
    return 41;
}

int func268(int var63) {
    if (var63 <= 0) return 1;
    return func268(var63 - 1);
}


int main() {
    for (int var308 = 0; var308 < 7; var308++) {
        var308 += 5;
    }

    int var378 = 28;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    int var48 = 98;
    if (var48 % 2 == 0) {
        printf("var48 is even\n");
    } else {
        printf("var48 is odd\n");
    }

    int var791 = 73;
    if (var791 % 2 == 0) {
        printf("var791 is even\n");
    } else {
        printf("var791 is odd\n");
    }

    return 0;
}
