
#include <stdio.h>


int func157(int var459) {
    if (var459 <= 0) return 1;
    return func157(var459 - 1);
}


int main() {
    int var124 = 0;
    while (var124 < 5) {
        var124 += 4;
        var124++;
    }

    int var157 = 92;
    if (var157 % 2 == 0) {
        printf("var157 is even\n");
    } else {
        printf("var157 is odd\n");
    }

    return 0;
}
