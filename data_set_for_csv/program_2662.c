
#include <stdio.h>


int func642(int var665) {
    if (var665 <= 0) return 1;
    return func642(var665 - 1);
}


int main() {
    for (int var641 = 0; var641 < 19; var641++) {
        var641 += 2;
    }

    int var534 = 41;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    int var330 = 27;
    if (var330 % 2 == 0) {
        printf("var330 is even\n");
    } else {
        printf("var330 is odd\n");
    }

    return 0;
}
