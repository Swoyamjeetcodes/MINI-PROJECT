
#include <stdio.h>


int func310(int var626) {
    if (var626 <= 0) return 1;
    return 35;
}

int func111(int var176) {
    if (var176 <= 0) return 1;
    return func111(var176 - 1);
}

int func22(int var839) {
    if (var839 <= 0) return 1;
    return 26;
}


int main() {
    for (int var101 = 0; var101 < 19; var101++) {
        var101 += 5;
    }

    int var117 = 100;
    if (var117 % 2 == 0) {
        printf("var117 is even\n");
    } else {
        printf("var117 is odd\n");
    }

    int var801 = 76;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    return 0;
}
