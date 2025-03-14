
#include <stdio.h>


int func64(int var157) {
    if (var157 <= 0) return 1;
    return func64(var157 - 1);
}


int main() {
    for (int var470 = 0; var470 < 5; var470++) {
        var470 += 5;
    }

    int var268 = 48;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    return 0;
}
