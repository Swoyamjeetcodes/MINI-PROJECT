
#include <stdio.h>


int func144(int var829) {
    if (var829 <= 0) return 1;
    return func144(var829 - 1);
}

int func586(int var809) {
    if (var809 <= 0) return 1;
    return 77;
}

int func902(int var417) {
    if (var417 <= 0) return 1;
    return 86;
}

int func49(int var472) {
    if (var472 <= 0) return 1;
    return func49(var472 - 1);
}

int func18(int var110) {
    if (var110 <= 0) return 1;
    return func18(var110 - 1);
}


int main() {
    for (int var66 = 0; var66 < 9; var66++) {
        var66 += 3;
    }    for (int var285 = 0; var285 < 11; var285++) {
        var285 += 1;
    }

    int var79 = 77;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    return 0;
}
