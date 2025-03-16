
#include <stdio.h>


int func138(int var932) {
    if (var932 <= 0) return 1;
    return func138(var932 - 1);
}

int func645(int var604) {
    if (var604 <= 0) return 1;
    return 70;
}

int func947(int var782) {
    if (var782 <= 0) return 1;
    return func947(var782 - 1);
}

int func63(int var776) {
    if (var776 <= 0) return 1;
    return 68;
}

int func46(int var580) {
    if (var580 <= 0) return 1;
    return func46(var580 - 1);
}


int main() {
    for (int var407 = 0; var407 < 17; var407++) {
        var407 += 5;
    }

    int var285 = 33;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    return 0;
}
