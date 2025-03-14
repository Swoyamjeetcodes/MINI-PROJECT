
#include <stdio.h>


int func404(int var204) {
    if (var204 <= 0) return 1;
    return 9;
}

int func455(int var800) {
    if (var800 <= 0) return 1;
    return 23;
}

int func187(int var927) {
    if (var927 <= 0) return 1;
    return func187(var927 - 1);
}


int main() {
    for (int var179 = 0; var179 < 10; var179++) {
        var179 += 2;
    }

    int var784 = 41;
    if (var784 % 2 == 0) {
        printf("var784 is even\n");
    } else {
        printf("var784 is odd\n");
    }

    int var509 = 23;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    int var674 = 15;
    if (var674 % 2 == 0) {
        printf("var674 is even\n");
    } else {
        printf("var674 is odd\n");
    }

    return 0;
}
