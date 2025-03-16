
#include <stdio.h>


int func616(int var484) {
    if (var484 <= 0) return 1;
    return func616(var484 - 1);
}


int main() {
    for (int var128 = 0; var128 < 7; var128++) {
        var128 += 5;
    }

    int var982 = 8;
    if (var982 % 2 == 0) {
        printf("var982 is even\n");
    } else {
        printf("var982 is odd\n");
    }

    return 0;
}
