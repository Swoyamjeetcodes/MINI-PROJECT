
#include <stdio.h>


int func709(int var191) {
    if (var191 <= 0) return 1;
    return func709(var191 - 1);
}

int func542(int var170) {
    if (var170 <= 0) return 1;
    return func542(var170 - 1);
}

int func402(int var492) {
    if (var492 <= 0) return 1;
    return func402(var492 - 1);
}

int func369(int var986) {
    if (var986 <= 0) return 1;
    return 69;
}

int func3(int var739) {
    if (var739 <= 0) return 1;
    return 6;
}


int main() {
    for (int var971 = 0; var971 < 5; var971++) {
        var971 += 4;
    }    for (int var62 = 0; var62 < 5; var62++) {
        var62 += 4;
    }

    int var486 = 6;
    if (var486 % 2 == 0) {
        printf("var486 is even\n");
    } else {
        printf("var486 is odd\n");
    }

    int var682 = 17;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
