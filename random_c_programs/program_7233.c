
#include <stdio.h>


int func227(int var864) {
    if (var864 <= 0) return 1;
    return func227(var864 - 1);
}

int func731(int var442) {
    if (var442 <= 0) return 1;
    return 36;
}

int func45(int var559) {
    if (var559 <= 0) return 1;
    return 68;
}

int func206(int var504) {
    if (var504 <= 0) return 1;
    return 53;
}

int func340(int var81) {
    if (var81 <= 0) return 1;
    return 78;
}


int main() {
    int var484 = 0;
    while (var484 < 5) {
        var484 += 4;
        var484++;
    }    int var305 = 0;
    while (var305 < 14) {
        var305 += 4;
        var305++;
    }

    int var321 = 80;
    if (var321 % 2 == 0) {
        printf("var321 is even\n");
    } else {
        printf("var321 is odd\n");
    }

    return 0;
}
