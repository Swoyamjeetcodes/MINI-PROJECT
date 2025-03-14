
#include <stdio.h>


int func554(int var144) {
    if (var144 <= 0) return 1;
    return func554(var144 - 1);
}


int main() {
    int var392 = 0;
    while (var392 < 16) {
        var392 += 3;
        var392++;
    }    for (int var865 = 0; var865 < 6; var865++) {
        var865 += 4;
    }    int var314 = 0;
    while (var314 < 15) {
        var314 += 5;
        var314++;
    }

    int var828 = 21;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var344 = 100;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    int var377 = 76;
    if (var377 % 2 == 0) {
        printf("var377 is even\n");
    } else {
        printf("var377 is odd\n");
    }

    return 0;
}
