
#include <stdio.h>


int func399(int var502) {
    if (var502 <= 0) return 1;
    return func399(var502 - 1);
}


int main() {
    int var747 = 0;
    while (var747 < 16) {
        var747 += 1;
        var747++;
    }    for (int var674 = 0; var674 < 6; var674++) {
        var674 += 5;
    }

    int var258 = 43;
    if (var258 % 2 == 0) {
        printf("var258 is even\n");
    } else {
        printf("var258 is odd\n");
    }

    return 0;
}
