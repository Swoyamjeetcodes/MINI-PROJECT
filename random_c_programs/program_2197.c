
#include <stdio.h>


int func845(int var926) {
    if (var926 <= 0) return 1;
    return func845(var926 - 1);
}


int main() {
    for (int var137 = 0; var137 < 15; var137++) {
        var137 += 4;
    }

    int var960 = 13;
    if (var960 % 2 == 0) {
        printf("var960 is even\n");
    } else {
        printf("var960 is odd\n");
    }

    return 0;
}
