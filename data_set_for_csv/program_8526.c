
#include <stdio.h>


int func945(int var145) {
    if (var145 <= 0) return 1;
    return func945(var145 - 1);
}

int func710(int var441) {
    if (var441 <= 0) return 1;
    return func710(var441 - 1);
}

int func674(int var377) {
    if (var377 <= 0) return 1;
    return func674(var377 - 1);
}

int func893(int var231) {
    if (var231 <= 0) return 1;
    return 22;
}

int func932(int var873) {
    if (var873 <= 0) return 1;
    return 35;
}


int main() {
    int var628 = 0;
    while (var628 < 15) {
        var628 += 5;
        var628++;
    }    int var730 = 0;
    while (var730 < 16) {
        var730 += 4;
        var730++;
    }

    int var123 = 56;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    int var718 = 47;
    if (var718 % 2 == 0) {
        printf("var718 is even\n");
    } else {
        printf("var718 is odd\n");
    }

    int var413 = 19;
    if (var413 % 2 == 0) {
        printf("var413 is even\n");
    } else {
        printf("var413 is odd\n");
    }

    return 0;
}
