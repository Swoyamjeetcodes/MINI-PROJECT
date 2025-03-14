
#include <stdio.h>


int func803(int var870) {
    if (var870 <= 0) return 1;
    return func803(var870 - 1);
}


int main() {
    int var305 = 0;
    while (var305 < 12) {
        var305 += 5;
        var305++;
    }

    int var685 = 15;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    return 0;
}
