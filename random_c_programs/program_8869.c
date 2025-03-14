
#include <stdio.h>


int func889(int var104) {
    if (var104 <= 0) return 1;
    return func889(var104 - 1);
}

int func819(int var644) {
    if (var644 <= 0) return 1;
    return func819(var644 - 1);
}

int func900(int var276) {
    if (var276 <= 0) return 1;
    return func900(var276 - 1);
}


int main() {
    for (int var16 = 0; var16 < 12; var16++) {
        var16 += 2;
    }    int var390 = 0;
    while (var390 < 20) {
        var390 += 5;
        var390++;
    }    for (int var677 = 0; var677 < 20; var677++) {
        var677 += 2;
    }

    int var749 = 32;
    if (var749 % 2 == 0) {
        printf("var749 is even\n");
    } else {
        printf("var749 is odd\n");
    }

    return 0;
}
