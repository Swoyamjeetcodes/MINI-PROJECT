
#include <stdio.h>


int func422(int var701) {
    if (var701 <= 0) return 1;
    return func422(var701 - 1);
}

int func29(int var113) {
    if (var113 <= 0) return 1;
    return func29(var113 - 1);
}


int main() {
    int var77 = 0;
    while (var77 < 14) {
        var77 += 4;
        var77++;
    }    int var479 = 0;
    while (var479 < 17) {
        var479 += 1;
        var479++;
    }

    int var572 = 83;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    int var704 = 66;
    if (var704 % 2 == 0) {
        printf("var704 is even\n");
    } else {
        printf("var704 is odd\n");
    }

    int var60 = 68;
    if (var60 % 2 == 0) {
        printf("var60 is even\n");
    } else {
        printf("var60 is odd\n");
    }

    return 0;
}
