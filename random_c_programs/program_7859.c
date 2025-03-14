
#include <stdio.h>


int func658(int var580) {
    if (var580 <= 0) return 1;
    return 48;
}

int func169(int var833) {
    if (var833 <= 0) return 1;
    return func169(var833 - 1);
}


int main() {
    for (int var603 = 0; var603 < 17; var603++) {
        var603 += 2;
    }    for (int var717 = 0; var717 < 14; var717++) {
        var717 += 3;
    }

    int var440 = 11;
    if (var440 % 2 == 0) {
        printf("var440 is even\n");
    } else {
        printf("var440 is odd\n");
    }

    int var573 = 81;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
