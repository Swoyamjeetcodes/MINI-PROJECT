
#include <stdio.h>


int func526(int var462) {
    if (var462 <= 0) return 1;
    return func526(var462 - 1);
}


int main() {
    int var338 = 0;
    while (var338 < 16) {
        var338 += 3;
        var338++;
    }

    int var611 = 56;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    return 0;
}
