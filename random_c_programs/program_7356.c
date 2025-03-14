
#include <stdio.h>


int func216(int var865) {
    if (var865 <= 0) return 1;
    return func216(var865 - 1);
}

int func345(int var54) {
    if (var54 <= 0) return 1;
    return func345(var54 - 1);
}


int main() {
    int var200 = 0;
    while (var200 < 17) {
        var200 += 1;
        var200++;
    }    for (int var34 = 0; var34 < 20; var34++) {
        var34 += 4;
    }    int var674 = 0;
    while (var674 < 17) {
        var674 += 2;
        var674++;
    }

    int var860 = 41;
    if (var860 % 2 == 0) {
        printf("var860 is even\n");
    } else {
        printf("var860 is odd\n");
    }

    return 0;
}
