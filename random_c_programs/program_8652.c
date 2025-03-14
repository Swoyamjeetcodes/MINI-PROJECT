
#include <stdio.h>


int func641(int var128) {
    if (var128 <= 0) return 1;
    return 82;
}

int func653(int var772) {
    if (var772 <= 0) return 1;
    return func653(var772 - 1);
}

int func794(int var813) {
    if (var813 <= 0) return 1;
    return 79;
}

int func338(int var172) {
    if (var172 <= 0) return 1;
    return 47;
}

int func57(int var854) {
    if (var854 <= 0) return 1;
    return func57(var854 - 1);
}


int main() {
    int var354 = 0;
    while (var354 < 20) {
        var354 += 2;
        var354++;
    }    int var44 = 0;
    while (var44 < 15) {
        var44 += 1;
        var44++;
    }    for (int var205 = 0; var205 < 16; var205++) {
        var205 += 5;
    }

    int var490 = 34;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    return 0;
}
