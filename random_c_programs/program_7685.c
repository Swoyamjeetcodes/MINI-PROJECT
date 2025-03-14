
#include <stdio.h>


int func813(int var885) {
    if (var885 <= 0) return 1;
    return 70;
}

int func353(int var119) {
    if (var119 <= 0) return 1;
    return 48;
}

int func633(int var162) {
    if (var162 <= 0) return 1;
    return func633(var162 - 1);
}

int func123(int var105) {
    if (var105 <= 0) return 1;
    return 1;
}


int main() {
    for (int var218 = 0; var218 < 7; var218++) {
        var218 += 3;
    }    int var626 = 0;
    while (var626 < 8) {
        var626 += 1;
        var626++;
    }    for (int var531 = 0; var531 < 8; var531++) {
        var531 += 1;
    }

    int var318 = 22;
    if (var318 % 2 == 0) {
        printf("var318 is even\n");
    } else {
        printf("var318 is odd\n");
    }

    int var235 = 60;
    if (var235 % 2 == 0) {
        printf("var235 is even\n");
    } else {
        printf("var235 is odd\n");
    }

    return 0;
}
