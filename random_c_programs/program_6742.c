
#include <stdio.h>


int func263(int var209) {
    if (var209 <= 0) return 1;
    return func263(var209 - 1);
}

int func459(int var787) {
    if (var787 <= 0) return 1;
    return 22;
}

int func318(int var906) {
    if (var906 <= 0) return 1;
    return 5;
}


int main() {
    int var623 = 0;
    while (var623 < 12) {
        var623 += 2;
        var623++;
    }    for (int var972 = 0; var972 < 16; var972++) {
        var972 += 2;
    }

    int var969 = 52;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    int var334 = 36;
    if (var334 % 2 == 0) {
        printf("var334 is even\n");
    } else {
        printf("var334 is odd\n");
    }

    int var346 = 72;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
