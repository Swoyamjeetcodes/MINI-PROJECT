
#include <stdio.h>


int func166(int var504) {
    if (var504 <= 0) return 1;
    return 80;
}

int func465(int var278) {
    if (var278 <= 0) return 1;
    return func465(var278 - 1);
}

int func689(int var166) {
    if (var166 <= 0) return 1;
    return 97;
}

int func920(int var291) {
    if (var291 <= 0) return 1;
    return 82;
}


int main() {
    int var248 = 0;
    while (var248 < 16) {
        var248 += 5;
        var248++;
    }    for (int var151 = 0; var151 < 12; var151++) {
        var151 += 4;
    }

    int var177 = 85;
    if (var177 % 2 == 0) {
        printf("var177 is even\n");
    } else {
        printf("var177 is odd\n");
    }

    return 0;
}
