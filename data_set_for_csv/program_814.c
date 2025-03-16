
#include <stdio.h>


int func505(int var805) {
    if (var805 <= 0) return 1;
    return func505(var805 - 1);
}

int func665(int var264) {
    if (var264 <= 0) return 1;
    return func665(var264 - 1);
}

int func337(int var378) {
    if (var378 <= 0) return 1;
    return func337(var378 - 1);
}


int main() {
    for (int var101 = 0; var101 < 15; var101++) {
        var101 += 4;
    }    int var709 = 0;
    while (var709 < 11) {
        var709 += 1;
        var709++;
    }    for (int var251 = 0; var251 < 12; var251++) {
        var251 += 4;
    }

    int var635 = 88;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    return 0;
}
