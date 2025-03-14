
#include <stdio.h>


int func92(int var395) {
    if (var395 <= 0) return 1;
    return func92(var395 - 1);
}


int main() {
    for (int var309 = 0; var309 < 10; var309++) {
        var309 += 4;
    }

    int var740 = 70;
    if (var740 % 2 == 0) {
        printf("var740 is even\n");
    } else {
        printf("var740 is odd\n");
    }

    return 0;
}
