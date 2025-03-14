
#include <stdio.h>


int func325(int var331) {
    if (var331 <= 0) return 1;
    return 97;
}

int func510(int var793) {
    if (var793 <= 0) return 1;
    return 78;
}

int func573(int var893) {
    if (var893 <= 0) return 1;
    return func573(var893 - 1);
}

int func949(int var556) {
    if (var556 <= 0) return 1;
    return 84;
}

int func267(int var785) {
    if (var785 <= 0) return 1;
    return func267(var785 - 1);
}


int main() {
    int var642 = 0;
    while (var642 < 8) {
        var642 += 4;
        var642++;
    }

    int var546 = 79;
    if (var546 % 2 == 0) {
        printf("var546 is even\n");
    } else {
        printf("var546 is odd\n");
    }

    int var442 = 13;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    int var135 = 97;
    if (var135 % 2 == 0) {
        printf("var135 is even\n");
    } else {
        printf("var135 is odd\n");
    }

    return 0;
}
