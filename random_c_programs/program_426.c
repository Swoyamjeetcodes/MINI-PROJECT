
#include <stdio.h>


int func778(int var574) {
    if (var574 <= 0) return 1;
    return func778(var574 - 1);
}

int func457(int var227) {
    if (var227 <= 0) return 1;
    return 15;
}

int func33(int var727) {
    if (var727 <= 0) return 1;
    return func33(var727 - 1);
}


int main() {
    int var811 = 0;
    while (var811 < 18) {
        var811 += 4;
        var811++;
    }

    int var178 = 9;
    if (var178 % 2 == 0) {
        printf("var178 is even\n");
    } else {
        printf("var178 is odd\n");
    }

    int var24 = 11;
    if (var24 % 2 == 0) {
        printf("var24 is even\n");
    } else {
        printf("var24 is odd\n");
    }

    return 0;
}
