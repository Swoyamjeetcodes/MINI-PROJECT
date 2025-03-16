
#include <stdio.h>


int func767(int var643) {
    if (var643 <= 0) return 1;
    return 5;
}

int func332(int var492) {
    if (var492 <= 0) return 1;
    return func332(var492 - 1);
}

int func947(int var446) {
    if (var446 <= 0) return 1;
    return 23;
}

int func848(int var709) {
    if (var709 <= 0) return 1;
    return func848(var709 - 1);
}


int main() {
    int var303 = 0;
    while (var303 < 17) {
        var303 += 4;
        var303++;
    }

    int var341 = 98;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var649 = 41;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    int var353 = 63;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    return 0;
}
