
#include <stdio.h>


int func43(int var647) {
    if (var647 <= 0) return 1;
    return 84;
}

int func73(int var60) {
    if (var60 <= 0) return 1;
    return func73(var60 - 1);
}


int main() {
    int var805 = 0;
    while (var805 < 13) {
        var805 += 3;
        var805++;
    }

    int var299 = 71;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    int var602 = 87;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
