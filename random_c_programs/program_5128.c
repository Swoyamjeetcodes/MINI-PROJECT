
#include <stdio.h>


int func468(int var664) {
    if (var664 <= 0) return 1;
    return func468(var664 - 1);
}

int func632(int var442) {
    if (var442 <= 0) return 1;
    return func632(var442 - 1);
}

int func177(int var247) {
    if (var247 <= 0) return 1;
    return func177(var247 - 1);
}

int func511(int var1) {
    if (var1 <= 0) return 1;
    return 92;
}


int main() {
    for (int var166 = 0; var166 < 11; var166++) {
        var166 += 2;
    }    int var869 = 0;
    while (var869 < 13) {
        var869 += 5;
        var869++;
    }

    int var764 = 62;
    if (var764 % 2 == 0) {
        printf("var764 is even\n");
    } else {
        printf("var764 is odd\n");
    }

    int var61 = 97;
    if (var61 % 2 == 0) {
        printf("var61 is even\n");
    } else {
        printf("var61 is odd\n");
    }

    int var495 = 93;
    if (var495 % 2 == 0) {
        printf("var495 is even\n");
    } else {
        printf("var495 is odd\n");
    }

    return 0;
}
