
#include <stdio.h>


int func742(int var528) {
    if (var528 <= 0) return 1;
    return func742(var528 - 1);
}

int func260(int var581) {
    if (var581 <= 0) return 1;
    return func260(var581 - 1);
}

int func231(int var613) {
    if (var613 <= 0) return 1;
    return 61;
}

int func633(int var825) {
    if (var825 <= 0) return 1;
    return 74;
}

int func590(int var14) {
    if (var14 <= 0) return 1;
    return func590(var14 - 1);
}


int main() {
    int var192 = 0;
    while (var192 < 5) {
        var192 += 5;
        var192++;
    }

    int var869 = 42;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    return 0;
}
