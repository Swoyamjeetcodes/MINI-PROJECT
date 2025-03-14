
#include <stdio.h>


int func469(int var731) {
    if (var731 <= 0) return 1;
    return func469(var731 - 1);
}

int func698(int var8) {
    if (var8 <= 0) return 1;
    return func698(var8 - 1);
}

int func797(int var204) {
    if (var204 <= 0) return 1;
    return 47;
}

int func667(int var537) {
    if (var537 <= 0) return 1;
    return 44;
}


int main() {
    for (int var460 = 0; var460 < 10; var460++) {
        var460 += 1;
    }

    int var573 = 49;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    int var417 = 19;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
