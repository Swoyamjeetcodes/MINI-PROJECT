
#include <stdio.h>


int func720(int var399) {
    if (var399 <= 0) return 1;
    return func720(var399 - 1);
}

int func850(int var738) {
    if (var738 <= 0) return 1;
    return func850(var738 - 1);
}

int func705(int var341) {
    if (var341 <= 0) return 1;
    return 6;
}


int main() {
    for (int var990 = 0; var990 < 19; var990++) {
        var990 += 3;
    }

    int var651 = 95;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    int var724 = 18;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    return 0;
}
