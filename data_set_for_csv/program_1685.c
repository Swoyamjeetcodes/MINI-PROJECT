
#include <stdio.h>


int func245(int var65) {
    if (var65 <= 0) return 1;
    return func245(var65 - 1);
}

int func22(int var678) {
    if (var678 <= 0) return 1;
    return func22(var678 - 1);
}


int main() {
    int var732 = 0;
    while (var732 < 18) {
        var732 += 5;
        var732++;
    }

    int var81 = 61;
    if (var81 % 2 == 0) {
        printf("var81 is even\n");
    } else {
        printf("var81 is odd\n");
    }

    int var742 = 70;
    if (var742 % 2 == 0) {
        printf("var742 is even\n");
    } else {
        printf("var742 is odd\n");
    }

    return 0;
}
