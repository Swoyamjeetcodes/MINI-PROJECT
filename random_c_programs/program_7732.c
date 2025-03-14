
#include <stdio.h>


int func336(int var58) {
    if (var58 <= 0) return 1;
    return 65;
}

int func592(int var780) {
    if (var780 <= 0) return 1;
    return func592(var780 - 1);
}

int func823(int var536) {
    if (var536 <= 0) return 1;
    return 3;
}

int func338(int var281) {
    if (var281 <= 0) return 1;
    return func338(var281 - 1);
}


int main() {
    for (int var540 = 0; var540 < 5; var540++) {
        var540 += 2;
    }

    int var655 = 2;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    int var119 = 21;
    if (var119 % 2 == 0) {
        printf("var119 is even\n");
    } else {
        printf("var119 is odd\n");
    }

    int var461 = 88;
    if (var461 % 2 == 0) {
        printf("var461 is even\n");
    } else {
        printf("var461 is odd\n");
    }

    return 0;
}
