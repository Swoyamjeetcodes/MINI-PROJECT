
#include <stdio.h>


int func495(int var77) {
    if (var77 <= 0) return 1;
    return func495(var77 - 1);
}


int main() {
    for (int var220 = 0; var220 < 16; var220++) {
        var220 += 3;
    }

    int var970 = 55;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    return 0;
}
