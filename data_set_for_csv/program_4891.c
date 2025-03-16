
#include <stdio.h>


int func310(int var137) {
    if (var137 <= 0) return 1;
    return func310(var137 - 1);
}


int main() {
    int var132 = 0;
    while (var132 < 10) {
        var132 += 1;
        var132++;
    }

    int var198 = 43;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    int var886 = 9;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
