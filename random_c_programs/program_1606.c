
#include <stdio.h>


int func838(int var55) {
    if (var55 <= 0) return 1;
    return func838(var55 - 1);
}


int main() {
    for (int var358 = 0; var358 < 6; var358++) {
        var358 += 5;
    }

    int var727 = 12;
    if (var727 % 2 == 0) {
        printf("var727 is even\n");
    } else {
        printf("var727 is odd\n");
    }

    return 0;
}
