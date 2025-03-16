
#include <stdio.h>


int func262(int var612) {
    if (var612 <= 0) return 1;
    return func262(var612 - 1);
}


int main() {
    for (int var709 = 0; var709 < 11; var709++) {
        var709 += 5;
    }

    int var870 = 30;
    if (var870 % 2 == 0) {
        printf("var870 is even\n");
    } else {
        printf("var870 is odd\n");
    }

    return 0;
}
