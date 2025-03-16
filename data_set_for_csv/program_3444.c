
#include <stdio.h>


int func347(int var747) {
    if (var747 <= 0) return 1;
    return 88;
}

int func837(int var836) {
    if (var836 <= 0) return 1;
    return 47;
}

int func930(int var14) {
    if (var14 <= 0) return 1;
    return func930(var14 - 1);
}

int func180(int var354) {
    if (var354 <= 0) return 1;
    return func180(var354 - 1);
}

int func752(int var233) {
    if (var233 <= 0) return 1;
    return func752(var233 - 1);
}


int main() {
    int var542 = 0;
    while (var542 < 6) {
        var542 += 2;
        var542++;
    }    int var286 = 0;
    while (var286 < 20) {
        var286 += 4;
        var286++;
    }    for (int var363 = 0; var363 < 16; var363++) {
        var363 += 5;
    }

    int var117 = 52;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    return 0;
}
