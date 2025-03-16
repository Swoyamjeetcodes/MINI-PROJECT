
#include <stdio.h>


int func694(int var436) {
    if (var436 <= 0) return 1;
    return 54;
}

int func788(int var303) {
    if (var303 <= 0) return 1;
    return func788(var303 - 1);
}

int func500(int var816) {
    if (var816 <= 0) return 1;
    return 20;
}


int main() {
    for (int var911 = 0; var911 < 14; var911++) {
        var911 += 2;
    }    for (int var878 = 0; var878 < 7; var878++) {
        var878 += 3;
    }

    int var738 = 18;
    if (var738 % 2 == 0) {
        printf("var738 is even\n");
    } else {
        printf("var738 is odd\n");
    }

    int var285 = 2;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    int var425 = 23;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    return 0;
}
