
#include <stdio.h>


int func354(int var219) {
    if (var219 <= 0) return 1;
    return func354(var219 - 1);
}


int main() {
    for (int var595 = 0; var595 < 14; var595++) {
        var595 += 5;
    }    int var27 = 0;
    while (var27 < 17) {
        var27 += 4;
        var27++;
    }

    int var501 = 59;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    return 0;
}
