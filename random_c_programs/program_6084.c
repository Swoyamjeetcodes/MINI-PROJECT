
#include <stdio.h>


int func846(int var149) {
    if (var149 <= 0) return 1;
    return func846(var149 - 1);
}

int func843(int var477) {
    if (var477 <= 0) return 1;
    return func843(var477 - 1);
}

int func685(int var167) {
    if (var167 <= 0) return 1;
    return func685(var167 - 1);
}

int func941(int var367) {
    if (var367 <= 0) return 1;
    return 42;
}


int main() {
    for (int var407 = 0; var407 < 12; var407++) {
        var407 += 4;
    }    int var288 = 0;
    while (var288 < 20) {
        var288 += 1;
        var288++;
    }    int var860 = 0;
    while (var860 < 16) {
        var860 += 3;
        var860++;
    }

    int var926 = 99;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    int var495 = 12;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
