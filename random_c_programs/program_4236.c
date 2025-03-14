
#include <stdio.h>


int func920(int var774) {
    if (var774 <= 0) return 1;
    return func920(var774 - 1);
}

int func684(int var654) {
    if (var654 <= 0) return 1;
    return func684(var654 - 1);
}

int func301(int var477) {
    if (var477 <= 0) return 1;
    return func301(var477 - 1);
}


int main() {
    for (int var812 = 0; var812 < 5; var812++) {
        var812 += 5;
    }    int var82 = 0;
    while (var82 < 17) {
        var82 += 4;
        var82++;
    }

    int var137 = 63;
    if (var137 % 2 == 0) {
        printf("var137 is even\n");
    } else {
        printf("var137 is odd\n");
    }

    return 0;
}
