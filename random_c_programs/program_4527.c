
#include <stdio.h>


int func137(int var398) {
    if (var398 <= 0) return 1;
    return 41;
}

int func966(int var17) {
    if (var17 <= 0) return 1;
    return func966(var17 - 1);
}

int func650(int var834) {
    if (var834 <= 0) return 1;
    return func650(var834 - 1);
}


int main() {
    int var246 = 0;
    while (var246 < 16) {
        var246 += 3;
        var246++;
    }    int var272 = 0;
    while (var272 < 17) {
        var272 += 2;
        var272++;
    }    for (int var551 = 0; var551 < 10; var551++) {
        var551 += 1;
    }

    int var584 = 41;
    if (var584 % 2 == 0) {
        printf("var584 is even\n");
    } else {
        printf("var584 is odd\n");
    }

    int var50 = 39;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    int var154 = 31;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
