
#include <stdio.h>


int func221(int var188) {
    if (var188 <= 0) return 1;
    return func221(var188 - 1);
}

int func262(int var532) {
    if (var532 <= 0) return 1;
    return func262(var532 - 1);
}

int func471(int var484) {
    if (var484 <= 0) return 1;
    return func471(var484 - 1);
}

int func710(int var71) {
    if (var71 <= 0) return 1;
    return 81;
}


int main() {
    for (int var603 = 0; var603 < 14; var603++) {
        var603 += 2;
    }    int var572 = 0;
    while (var572 < 8) {
        var572 += 5;
        var572++;
    }    int var717 = 0;
    while (var717 < 16) {
        var717 += 1;
        var717++;
    }

    int var55 = 63;
    if (var55 % 2 == 0) {
        printf("var55 is even\n");
    } else {
        printf("var55 is odd\n");
    }

    int var570 = 4;
    if (var570 % 2 == 0) {
        printf("var570 is even\n");
    } else {
        printf("var570 is odd\n");
    }

    return 0;
}
