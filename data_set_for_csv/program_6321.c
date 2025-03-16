
#include <stdio.h>


int func338(int var236) {
    if (var236 <= 0) return 1;
    return func338(var236 - 1);
}


int main() {
    for (int var938 = 0; var938 < 14; var938++) {
        var938 += 1;
    }    for (int var358 = 0; var358 < 20; var358++) {
        var358 += 1;
    }

    int var439 = 14;
    if (var439 % 2 == 0) {
        printf("var439 is even\n");
    } else {
        printf("var439 is odd\n");
    }

    return 0;
}
