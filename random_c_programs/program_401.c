
#include <stdio.h>


int func899(int var795) {
    if (var795 <= 0) return 1;
    return func899(var795 - 1);
}

int func601(int var704) {
    if (var704 <= 0) return 1;
    return func601(var704 - 1);
}

int func729(int var423) {
    if (var423 <= 0) return 1;
    return func729(var423 - 1);
}

int func968(int var89) {
    if (var89 <= 0) return 1;
    return 39;
}

int func428(int var699) {
    if (var699 <= 0) return 1;
    return func428(var699 - 1);
}


int main() {
    int var925 = 0;
    while (var925 < 8) {
        var925 += 1;
        var925++;
    }    int var150 = 0;
    while (var150 < 5) {
        var150 += 4;
        var150++;
    }

    int var373 = 2;
    if (var373 % 2 == 0) {
        printf("var373 is even\n");
    } else {
        printf("var373 is odd\n");
    }

    return 0;
}
