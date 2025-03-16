
#include <stdio.h>


int func901(int var863) {
    if (var863 <= 0) return 1;
    return 23;
}

int func654(int var379) {
    if (var379 <= 0) return 1;
    return 41;
}

int func311(int var540) {
    if (var540 <= 0) return 1;
    return func311(var540 - 1);
}

int func716(int var371) {
    if (var371 <= 0) return 1;
    return 35;
}


int main() {
    int var856 = 0;
    while (var856 < 20) {
        var856 += 2;
        var856++;
    }

    int var350 = 73;
    if (var350 % 2 == 0) {
        printf("var350 is even\n");
    } else {
        printf("var350 is odd\n");
    }

    int var795 = 84;
    if (var795 % 2 == 0) {
        printf("var795 is even\n");
    } else {
        printf("var795 is odd\n");
    }

    return 0;
}
