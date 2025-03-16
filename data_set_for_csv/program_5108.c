
#include <stdio.h>


int func833(int var194) {
    if (var194 <= 0) return 1;
    return 24;
}

int func856(int var567) {
    if (var567 <= 0) return 1;
    return func856(var567 - 1);
}

int func970(int var404) {
    if (var404 <= 0) return 1;
    return 8;
}

int func277(int var921) {
    if (var921 <= 0) return 1;
    return func277(var921 - 1);
}


int main() {
    for (int var675 = 0; var675 < 7; var675++) {
        var675 += 5;
    }

    int var354 = 97;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    int var14 = 96;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    int var129 = 18;
    if (var129 % 2 == 0) {
        printf("var129 is even\n");
    } else {
        printf("var129 is odd\n");
    }

    return 0;
}
