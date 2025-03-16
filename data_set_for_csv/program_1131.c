
#include <stdio.h>


int func709(int var421) {
    if (var421 <= 0) return 1;
    return func709(var421 - 1);
}

int func795(int var687) {
    if (var687 <= 0) return 1;
    return func795(var687 - 1);
}

int func705(int var24) {
    if (var24 <= 0) return 1;
    return func705(var24 - 1);
}

int func842(int var971) {
    if (var971 <= 0) return 1;
    return 28;
}

int func96(int var823) {
    if (var823 <= 0) return 1;
    return func96(var823 - 1);
}


int main() {
    int var765 = 0;
    while (var765 < 15) {
        var765 += 4;
        var765++;
    }    for (int var927 = 0; var927 < 19; var927++) {
        var927 += 1;
    }    for (int var982 = 0; var982 < 17; var982++) {
        var982 += 2;
    }

    int var772 = 82;
    if (var772 % 2 == 0) {
        printf("var772 is even\n");
    } else {
        printf("var772 is odd\n");
    }

    int var473 = 26;
    if (var473 % 2 == 0) {
        printf("var473 is even\n");
    } else {
        printf("var473 is odd\n");
    }

    return 0;
}
