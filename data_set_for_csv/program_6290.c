
#include <stdio.h>


int func659(int var909) {
    if (var909 <= 0) return 1;
    return 27;
}

int func437(int var914) {
    if (var914 <= 0) return 1;
    return func437(var914 - 1);
}

int func139(int var464) {
    if (var464 <= 0) return 1;
    return 34;
}

int func213(int var456) {
    if (var456 <= 0) return 1;
    return func213(var456 - 1);
}


int main() {
    for (int var501 = 0; var501 < 17; var501++) {
        var501 += 1;
    }

    int var851 = 11;
    if (var851 % 2 == 0) {
        printf("var851 is even\n");
    } else {
        printf("var851 is odd\n");
    }

    int var754 = 3;
    if (var754 % 2 == 0) {
        printf("var754 is even\n");
    } else {
        printf("var754 is odd\n");
    }

    int var426 = 92;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
