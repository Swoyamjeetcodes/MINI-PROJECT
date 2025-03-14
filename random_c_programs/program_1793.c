
#include <stdio.h>


int func321(int var413) {
    if (var413 <= 0) return 1;
    return func321(var413 - 1);
}


int main() {
    int var724 = 0;
    while (var724 < 16) {
        var724 += 4;
        var724++;
    }

    int var936 = 81;
    if (var936 % 2 == 0) {
        printf("var936 is even\n");
    } else {
        printf("var936 is odd\n");
    }

    return 0;
}
