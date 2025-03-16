
#include <stdio.h>


int func884(int var584) {
    if (var584 <= 0) return 1;
    return func884(var584 - 1);
}


int main() {
    for (int var53 = 0; var53 < 16; var53++) {
        var53 += 3;
    }

    int var556 = 73;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    return 0;
}
