
#include <stdio.h>


int func455(int var224) {
    if (var224 <= 0) return 1;
    return func455(var224 - 1);
}

int func822(int var419) {
    if (var419 <= 0) return 1;
    return func822(var419 - 1);
}

int func899(int var872) {
    if (var872 <= 0) return 1;
    return 28;
}

int func516(int var293) {
    if (var293 <= 0) return 1;
    return func516(var293 - 1);
}


int main() {
    int var767 = 0;
    while (var767 < 19) {
        var767 += 2;
        var767++;
    }

    int var262 = 70;
    if (var262 % 2 == 0) {
        printf("var262 is even\n");
    } else {
        printf("var262 is odd\n");
    }

    int var405 = 67;
    if (var405 % 2 == 0) {
        printf("var405 is even\n");
    } else {
        printf("var405 is odd\n");
    }

    int var954 = 33;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    return 0;
}
