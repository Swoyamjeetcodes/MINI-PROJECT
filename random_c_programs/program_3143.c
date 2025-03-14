
#include <stdio.h>


int func393(int var155) {
    if (var155 <= 0) return 1;
    return 18;
}

int func416(int var137) {
    if (var137 <= 0) return 1;
    return func416(var137 - 1);
}

int func838(int var21) {
    if (var21 <= 0) return 1;
    return func838(var21 - 1);
}

int func415(int var278) {
    if (var278 <= 0) return 1;
    return 100;
}


int main() {
    for (int var661 = 0; var661 < 19; var661++) {
        var661 += 5;
    }

    int var819 = 22;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var912 = 2;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    return 0;
}
