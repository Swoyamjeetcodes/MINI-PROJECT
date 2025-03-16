
#include <stdio.h>


int func703(int var821) {
    if (var821 <= 0) return 1;
    return func703(var821 - 1);
}

int func979(int var222) {
    if (var222 <= 0) return 1;
    return func979(var222 - 1);
}

int func44(int var642) {
    if (var642 <= 0) return 1;
    return func44(var642 - 1);
}

int func628(int var367) {
    if (var367 <= 0) return 1;
    return 84;
}

int func709(int var512) {
    if (var512 <= 0) return 1;
    return 25;
}

int func633(int var30) {
    if (var30 <= 0) return 1;
    return 94;
}

int func383(int var496) {
    if (var496 <= 0) return 1;
    return func383(var496 - 1);
}


int main() {
    for (int var390 = 0; var390 < 15; var390++) {
        var390 += 1;
    }    int var745 = 0;
    while (var745 < 13) {
        var745 += 4;
        var745++;
    }

    int var383 = 29;
    if (var383 % 2 == 0) {
        printf("var383 is even\n");
    } else {
        printf("var383 is odd\n");
    }

    return 0;
}
