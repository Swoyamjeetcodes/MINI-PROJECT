
#include <stdio.h>


int func478(int var24) {
    if (var24 <= 0) return 1;
    return func478(var24 - 1);
}

int func860(int var655) {
    if (var655 <= 0) return 1;
    return func860(var655 - 1);
}

int func279(int var851) {
    if (var851 <= 0) return 1;
    return 38;
}


int main() {
    int var355 = 0;
    while (var355 < 15) {
        var355 += 2;
        var355++;
    }    for (int var780 = 0; var780 < 6; var780++) {
        var780 += 3;
    }    for (int var172 = 0; var172 < 10; var172++) {
        var172 += 1;
    }

    int var627 = 25;
    if (var627 % 2 == 0) {
        printf("var627 is even\n");
    } else {
        printf("var627 is odd\n");
    }

    int var763 = 26;
    if (var763 % 2 == 0) {
        printf("var763 is even\n");
    } else {
        printf("var763 is odd\n");
    }

    return 0;
}
