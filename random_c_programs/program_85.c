
#include <stdio.h>


int func764(int var263) {
    if (var263 <= 0) return 1;
    return func764(var263 - 1);
}


int main() {
    for (int var578 = 0; var578 < 7; var578++) {
        var578 += 1;
    }

    int var608 = 35;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    return 0;
}
