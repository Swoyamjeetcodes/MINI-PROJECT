
#include <stdio.h>


int func121(int var112) {
    if (var112 <= 0) return 1;
    return 38;
}

int func483(int var425) {
    if (var425 <= 0) return 1;
    return 31;
}

int func250(int var5) {
    if (var5 <= 0) return 1;
    return 70;
}

int func795(int var677) {
    if (var677 <= 0) return 1;
    return func795(var677 - 1);
}


int main() {
    int var880 = 0;
    while (var880 < 11) {
        var880 += 2;
        var880++;
    }    for (int var279 = 0; var279 < 6; var279++) {
        var279 += 3;
    }    for (int var836 = 0; var836 < 19; var836++) {
        var836 += 2;
    }

    int var589 = 38;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
