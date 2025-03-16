
#include <stdio.h>


int func423(int var236) {
    if (var236 <= 0) return 1;
    return func423(var236 - 1);
}


int main() {
    for (int var434 = 0; var434 < 11; var434++) {
        var434 += 3;
    }

    int var319 = 6;
    if (var319 % 2 == 0) {
        printf("var319 is even\n");
    } else {
        printf("var319 is odd\n");
    }

    return 0;
}
