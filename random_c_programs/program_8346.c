
#include <stdio.h>


int func19(int var408) {
    if (var408 <= 0) return 1;
    return func19(var408 - 1);
}


int main() {
    for (int var248 = 0; var248 < 7; var248++) {
        var248 += 2;
    }

    int var433 = 50;
    if (var433 % 2 == 0) {
        printf("var433 is even\n");
    } else {
        printf("var433 is odd\n");
    }

    return 0;
}
