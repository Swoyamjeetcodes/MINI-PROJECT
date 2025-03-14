
#include <stdio.h>


int func390(int var162) {
    if (var162 <= 0) return 1;
    return 93;
}

int func267(int var433) {
    if (var433 <= 0) return 1;
    return func267(var433 - 1);
}

int func244(int var714) {
    if (var714 <= 0) return 1;
    return func244(var714 - 1);
}


int main() {
    int var667 = 0;
    while (var667 < 5) {
        var667 += 4;
        var667++;
    }    for (int var458 = 0; var458 < 19; var458++) {
        var458 += 1;
    }    for (int var598 = 0; var598 < 16; var598++) {
        var598 += 2;
    }    for (int var79 = 0; var79 < 17; var79++) {
        var79 += 5;
    }

    int var35 = 97;
    if (var35 % 2 == 0) {
        printf("var35 is even\n");
    } else {
        printf("var35 is odd\n");
    }

    return 0;
}
