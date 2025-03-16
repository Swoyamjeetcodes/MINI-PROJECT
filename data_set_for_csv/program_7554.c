
#include <stdio.h>


int func394(int var403) {
    if (var403 <= 0) return 1;
    return func394(var403 - 1);
}

int func397(int var316) {
    if (var316 <= 0) return 1;
    return func397(var316 - 1);
}

int func746(int var537) {
    if (var537 <= 0) return 1;
    return func746(var537 - 1);
}

int func820(int var214) {
    if (var214 <= 0) return 1;
    return func820(var214 - 1);
}

int func206(int var495) {
    if (var495 <= 0) return 1;
    return 12;
}

int func928(int var878) {
    if (var878 <= 0) return 1;
    return func928(var878 - 1);
}

int func9(int var858) {
    if (var858 <= 0) return 1;
    return 42;
}

int func823(int var201) {
    if (var201 <= 0) return 1;
    return func823(var201 - 1);
}


int main() {
    for (int var309 = 0; var309 < 17; var309++) {
        var309 += 2;
    }    int var310 = 0;
    while (var310 < 20) {
        var310 += 2;
        var310++;
    }

    int var822 = 49;
    if (var822 % 2 == 0) {
        printf("var822 is even\n");
    } else {
        printf("var822 is odd\n");
    }

    return 0;
}
