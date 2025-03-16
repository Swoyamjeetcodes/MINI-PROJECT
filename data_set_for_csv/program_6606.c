
#include <stdio.h>


int func481(int var75) {
    if (var75 <= 0) return 1;
    return 42;
}

int func844(int var179) {
    if (var179 <= 0) return 1;
    return func844(var179 - 1);
}

int func914(int var763) {
    if (var763 <= 0) return 1;
    return func914(var763 - 1);
}

int func364(int var690) {
    if (var690 <= 0) return 1;
    return 14;
}


int main() {
    for (int var683 = 0; var683 < 18; var683++) {
        var683 += 4;
    }    for (int var576 = 0; var576 < 17; var576++) {
        var576 += 5;
    }

    int var85 = 28;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    int var656 = 31;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var681 = 57;
    if (var681 % 2 == 0) {
        printf("var681 is even\n");
    } else {
        printf("var681 is odd\n");
    }

    return 0;
}
