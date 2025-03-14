
#include <stdio.h>


int func540(int var433) {
    if (var433 <= 0) return 1;
    return func540(var433 - 1);
}


int main() {
    for (int var238 = 0; var238 < 9; var238++) {
        var238 += 5;
    }

    int var370 = 7;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    return 0;
}
