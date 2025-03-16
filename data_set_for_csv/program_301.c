
#include <stdio.h>


int func476(int var671) {
    if (var671 <= 0) return 1;
    return func476(var671 - 1);
}


int main() {
    for (int var49 = 0; var49 < 19; var49++) {
        var49 += 2;
    }

    int var452 = 25;
    if (var452 % 2 == 0) {
        printf("var452 is even\n");
    } else {
        printf("var452 is odd\n");
    }

    return 0;
}
