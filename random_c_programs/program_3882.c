
#include <stdio.h>


int func740(int var673) {
    if (var673 <= 0) return 1;
    return 48;
}

int func547(int var101) {
    if (var101 <= 0) return 1;
    return func547(var101 - 1);
}

int func90(int var152) {
    if (var152 <= 0) return 1;
    return func90(var152 - 1);
}


int main() {
    int var134 = 0;
    while (var134 < 11) {
        var134 += 1;
        var134++;
    }    int var5 = 0;
    while (var5 < 20) {
        var5 += 1;
        var5++;
    }    int var939 = 0;
    while (var939 < 19) {
        var939 += 1;
        var939++;
    }

    int var696 = 40;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    int var702 = 33;
    if (var702 % 2 == 0) {
        printf("var702 is even\n");
    } else {
        printf("var702 is odd\n");
    }

    return 0;
}
