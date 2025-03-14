
#include <stdio.h>


int func209(int var814) {
    if (var814 <= 0) return 1;
    return func209(var814 - 1);
}

int func931(int var382) {
    if (var382 <= 0) return 1;
    return func931(var382 - 1);
}

int func35(int var712) {
    if (var712 <= 0) return 1;
    return 70;
}


int main() {
    int var362 = 0;
    while (var362 < 9) {
        var362 += 3;
        var362++;
    }    int var987 = 0;
    while (var987 < 11) {
        var987 += 3;
        var987++;
    }

    int var540 = 64;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    int var817 = 98;
    if (var817 % 2 == 0) {
        printf("var817 is even\n");
    } else {
        printf("var817 is odd\n");
    }

    return 0;
}
