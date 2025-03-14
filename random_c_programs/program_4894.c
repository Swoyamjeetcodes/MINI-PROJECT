
#include <stdio.h>


int func93(int var137) {
    if (var137 <= 0) return 1;
    return 97;
}

int func136(int var463) {
    if (var463 <= 0) return 1;
    return func136(var463 - 1);
}

int func644(int var164) {
    if (var164 <= 0) return 1;
    return 7;
}

int func794(int var152) {
    if (var152 <= 0) return 1;
    return func794(var152 - 1);
}


int main() {
    for (int var347 = 0; var347 < 11; var347++) {
        var347 += 3;
    }    int var14 = 0;
    while (var14 < 19) {
        var14 += 4;
        var14++;
    }

    int var814 = 27;
    if (var814 % 2 == 0) {
        printf("var814 is even\n");
    } else {
        printf("var814 is odd\n");
    }

    int var747 = 3;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
