
#include <stdio.h>


int func266(int var145) {
    if (var145 <= 0) return 1;
    return 10;
}

int func931(int var204) {
    if (var204 <= 0) return 1;
    return 70;
}

int func150(int var717) {
    if (var717 <= 0) return 1;
    return 87;
}

int func106(int var644) {
    if (var644 <= 0) return 1;
    return func106(var644 - 1);
}

int func199(int var108) {
    if (var108 <= 0) return 1;
    return func199(var108 - 1);
}


int main() {
    for (int var202 = 0; var202 < 9; var202++) {
        var202 += 3;
    }    for (int var666 = 0; var666 < 20; var666++) {
        var666 += 4;
    }

    int var483 = 97;
    if (var483 % 2 == 0) {
        printf("var483 is even\n");
    } else {
        printf("var483 is odd\n");
    }

    return 0;
}
