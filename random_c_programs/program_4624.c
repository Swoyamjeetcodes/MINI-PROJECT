
#include <stdio.h>


int func626(int var15) {
    if (var15 <= 0) return 1;
    return 36;
}

int func89(int var162) {
    if (var162 <= 0) return 1;
    return func89(var162 - 1);
}


int main() {
    int var771 = 0;
    while (var771 < 5) {
        var771 += 1;
        var771++;
    }

    int var401 = 41;
    if (var401 % 2 == 0) {
        printf("var401 is even\n");
    } else {
        printf("var401 is odd\n");
    }

    int var443 = 7;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    int var573 = 63;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
