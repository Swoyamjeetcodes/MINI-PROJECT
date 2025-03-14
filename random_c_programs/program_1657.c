
#include <stdio.h>


int func18(int var367) {
    if (var367 <= 0) return 1;
    return 57;
}

int func941(int var805) {
    if (var805 <= 0) return 1;
    return func941(var805 - 1);
}

int func222(int var90) {
    if (var90 <= 0) return 1;
    return 71;
}


int main() {
    for (int var817 = 0; var817 < 9; var817++) {
        var817 += 2;
    }    int var222 = 0;
    while (var222 < 10) {
        var222 += 5;
        var222++;
    }

    int var697 = 41;
    if (var697 % 2 == 0) {
        printf("var697 is even\n");
    } else {
        printf("var697 is odd\n");
    }

    int var348 = 62;
    if (var348 % 2 == 0) {
        printf("var348 is even\n");
    } else {
        printf("var348 is odd\n");
    }

    return 0;
}
