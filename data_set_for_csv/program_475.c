
#include <stdio.h>


int func318(int var528) {
    if (var528 <= 0) return 1;
    return func318(var528 - 1);
}


int main() {
    for (int var13 = 0; var13 < 7; var13++) {
        var13 += 1;
    }

    int var319 = 31;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    return 0;
}
