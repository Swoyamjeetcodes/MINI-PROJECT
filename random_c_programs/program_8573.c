
#include <stdio.h>


int func582(int var496) {
    if (var496 <= 0) return 1;
    return func582(var496 - 1);
}

int func185(int var714) {
    if (var714 <= 0) return 1;
    return func185(var714 - 1);
}

int func379(int var568) {
    if (var568 <= 0) return 1;
    return func379(var568 - 1);
}


int main() {
    int var442 = 0;
    while (var442 < 11) {
        var442 += 5;
        var442++;
    }    for (int var383 = 0; var383 < 6; var383++) {
        var383 += 4;
    }

    int var629 = 24;
    if (var629 % 2 == 0) {
        printf("var629 is even\n");
    } else {
        printf("var629 is odd\n");
    }

    int var586 = 47;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var925 = 71;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
