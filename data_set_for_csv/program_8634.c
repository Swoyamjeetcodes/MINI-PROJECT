
#include <stdio.h>


int func876(int var417) {
    if (var417 <= 0) return 1;
    return func876(var417 - 1);
}


int main() {
    for (int var13 = 0; var13 < 6; var13++) {
        var13 += 5;
    }

    int var204 = 92;
    if (var204 % 2 == 0) {
        printf("var204 is even\n");
    } else {
        printf("var204 is odd\n");
    }

    return 0;
}
