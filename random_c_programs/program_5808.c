
#include <stdio.h>


int func360(int var540) {
    if (var540 <= 0) return 1;
    return func360(var540 - 1);
}


int main() {
    for (int var126 = 0; var126 < 18; var126++) {
        var126 += 4;
    }    for (int var516 = 0; var516 < 7; var516++) {
        var516 += 4;
    }

    int var96 = 38;
    if (var96 % 2 == 0) {
        printf("var96 is even\n");
    } else {
        printf("var96 is odd\n");
    }

    return 0;
}
