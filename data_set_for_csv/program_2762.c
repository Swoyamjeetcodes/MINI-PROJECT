
#include <stdio.h>


int func898(int var471) {
    if (var471 <= 0) return 1;
    return func898(var471 - 1);
}

int func909(int var676) {
    if (var676 <= 0) return 1;
    return 1;
}

int func182(int var918) {
    if (var918 <= 0) return 1;
    return func182(var918 - 1);
}

int func586(int var245) {
    if (var245 <= 0) return 1;
    return func586(var245 - 1);
}


int main() {
    int var934 = 0;
    while (var934 < 18) {
        var934 += 4;
        var934++;
    }    int var802 = 0;
    while (var802 < 9) {
        var802 += 3;
        var802++;
    }    for (int var825 = 0; var825 < 5; var825++) {
        var825 += 2;
    }

    int var287 = 61;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    return 0;
}
