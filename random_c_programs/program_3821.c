
#include <stdio.h>


int func958(int var790) {
    if (var790 <= 0) return 1;
    return func958(var790 - 1);
}

int func824(int var241) {
    if (var241 <= 0) return 1;
    return func824(var241 - 1);
}

int func586(int var442) {
    if (var442 <= 0) return 1;
    return 22;
}

int func843(int var641) {
    if (var641 <= 0) return 1;
    return func843(var641 - 1);
}

int func141(int var717) {
    if (var717 <= 0) return 1;
    return 88;
}


int main() {
    for (int var365 = 0; var365 < 6; var365++) {
        var365 += 3;
    }    int var247 = 0;
    while (var247 < 19) {
        var247 += 5;
        var247++;
    }

    int var298 = 97;
    if (var298 % 2 == 0) {
        printf("var298 is even\n");
    } else {
        printf("var298 is odd\n");
    }

    return 0;
}
