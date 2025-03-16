
#include <stdio.h>


int func136(int var34) {
    if (var34 <= 0) return 1;
    return 45;
}

int func40(int var881) {
    if (var881 <= 0) return 1;
    return func40(var881 - 1);
}


int main() {
    for (int var509 = 0; var509 < 10; var509++) {
        var509 += 3;
    }

    int var20 = 82;
    if (var20 % 2 == 0) {
        printf("var20 is even\n");
    } else {
        printf("var20 is odd\n");
    }

    int var292 = 52;
    if (var292 % 2 == 0) {
        printf("var292 is even\n");
    } else {
        printf("var292 is odd\n");
    }

    int var800 = 81;
    if (var800 % 2 == 0) {
        printf("var800 is even\n");
    } else {
        printf("var800 is odd\n");
    }

    return 0;
}
