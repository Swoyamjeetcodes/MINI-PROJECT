
#include <stdio.h>


int func436(int var590) {
    if (var590 <= 0) return 1;
    return 95;
}

int func930(int var624) {
    if (var624 <= 0) return 1;
    return 42;
}

int func808(int var109) {
    if (var109 <= 0) return 1;
    return func808(var109 - 1);
}


int main() {
    for (int var469 = 0; var469 < 13; var469++) {
        var469 += 1;
    }    for (int var183 = 0; var183 < 14; var183++) {
        var183 += 2;
    }    for (int var803 = 0; var803 < 5; var803++) {
        var803 += 5;
    }    for (int var377 = 0; var377 < 19; var377++) {
        var377 += 4;
    }

    int var484 = 72;
    if (var484 % 2 == 0) {
        printf("var484 is even\n");
    } else {
        printf("var484 is odd\n");
    }

    int var25 = 90;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
