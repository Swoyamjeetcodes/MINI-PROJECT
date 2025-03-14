
#include <stdio.h>


int func145(int var212) {
    if (var212 <= 0) return 1;
    return 32;
}

int func941(int var685) {
    if (var685 <= 0) return 1;
    return func941(var685 - 1);
}

int func233(int var289) {
    if (var289 <= 0) return 1;
    return 92;
}

int func717(int var108) {
    if (var108 <= 0) return 1;
    return func717(var108 - 1);
}


int main() {
    for (int var723 = 0; var723 < 20; var723++) {
        var723 += 2;
    }    int var986 = 0;
    while (var986 < 11) {
        var986 += 2;
        var986++;
    }    int var436 = 0;
    while (var436 < 17) {
        var436 += 5;
        var436++;
    }

    int var900 = 5;
    if (var900 % 2 == 0) {
        printf("var900 is even\n");
    } else {
        printf("var900 is odd\n");
    }

    return 0;
}
