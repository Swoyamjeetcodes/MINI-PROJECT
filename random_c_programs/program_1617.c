
#include <stdio.h>


int func294(int var222) {
    if (var222 <= 0) return 1;
    return func294(var222 - 1);
}


int main() {
    for (int var85 = 0; var85 < 9; var85++) {
        var85 += 2;
    }

    int var113 = 38;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
