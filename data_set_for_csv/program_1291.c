
#include <stdio.h>


int func856(int var204) {
    if (var204 <= 0) return 1;
    return 86;
}

int func993(int var237) {
    if (var237 <= 0) return 1;
    return 28;
}

int func974(int var517) {
    if (var517 <= 0) return 1;
    return func974(var517 - 1);
}

int func460(int var104) {
    if (var104 <= 0) return 1;
    return func460(var104 - 1);
}


int main() {
    for (int var128 = 0; var128 < 10; var128++) {
        var128 += 1;
    }    for (int var259 = 0; var259 < 6; var259++) {
        var259 += 4;
    }

    int var715 = 7;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    return 0;
}
