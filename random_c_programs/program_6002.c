
#include <stdio.h>


int func477(int var910) {
    if (var910 <= 0) return 1;
    return func477(var910 - 1);
}


int main() {
    for (int var212 = 0; var212 < 9; var212++) {
        var212 += 3;
    }

    int var724 = 57;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    int var225 = 57;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
