
#include <stdio.h>


int func157(int var955) {
    if (var955 <= 0) return 1;
    return 80;
}

int func569(int var68) {
    if (var68 <= 0) return 1;
    return func569(var68 - 1);
}

int func481(int var489) {
    if (var489 <= 0) return 1;
    return func481(var489 - 1);
}

int func738(int var598) {
    if (var598 <= 0) return 1;
    return func738(var598 - 1);
}


int main() {
    for (int var481 = 0; var481 < 6; var481++) {
        var481 += 2;
    }    int var679 = 0;
    while (var679 < 20) {
        var679 += 2;
        var679++;
    }

    int var696 = 41;
    if (var696 % 2 == 0) {
        printf("var696 is even\n");
    } else {
        printf("var696 is odd\n");
    }

    return 0;
}
