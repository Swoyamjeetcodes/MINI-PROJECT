
#include <stdio.h>


int func519(int var190) {
    if (var190 <= 0) return 1;
    return 63;
}

int func849(int var792) {
    if (var792 <= 0) return 1;
    return func849(var792 - 1);
}

int func813(int var875) {
    if (var875 <= 0) return 1;
    return func813(var875 - 1);
}

int func191(int var172) {
    if (var172 <= 0) return 1;
    return func191(var172 - 1);
}


int main() {
    int var739 = 0;
    while (var739 < 20) {
        var739 += 4;
        var739++;
    }    for (int var595 = 0; var595 < 5; var595++) {
        var595 += 5;
    }

    int var19 = 92;
    if (var19 % 2 == 0) {
        printf("var19 is even\n");
    } else {
        printf("var19 is odd\n");
    }

    int var961 = 0;
    if (var961 % 2 == 0) {
        printf("var961 is even\n");
    } else {
        printf("var961 is odd\n");
    }

    int var936 = 67;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
