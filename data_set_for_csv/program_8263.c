
#include <stdio.h>


int func375(int var255) {
    if (var255 <= 0) return 1;
    return func375(var255 - 1);
}


int main() {
    int var334 = 0;
    while (var334 < 15) {
        var334 += 3;
        var334++;
    }

    int var620 = 44;
    if (var620 % 2 == 0) {
        printf("var620 is even\n");
    } else {
        printf("var620 is odd\n");
    }

    return 0;
}
