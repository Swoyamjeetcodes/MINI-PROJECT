
#include <stdio.h>


int func874(int var784) {
    if (var784 <= 0) return 1;
    return func874(var784 - 1);
}

int func860(int var345) {
    if (var345 <= 0) return 1;
    return 62;
}

int func290(int var41) {
    if (var41 <= 0) return 1;
    return 15;
}


int main() {
    int var124 = 0;
    while (var124 < 5) {
        var124 += 2;
        var124++;
    }    for (int var634 = 0; var634 < 13; var634++) {
        var634 += 2;
    }

    int var568 = 43;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    int var555 = 38;
    if (var555 % 2 == 0) {
        printf("var555 is even\n");
    } else {
        printf("var555 is odd\n");
    }

    return 0;
}
