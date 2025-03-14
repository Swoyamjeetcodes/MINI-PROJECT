
#include <stdio.h>


int func900(int var155) {
    if (var155 <= 0) return 1;
    return func900(var155 - 1);
}


int main() {
    int var488 = 0;
    while (var488 < 11) {
        var488 += 1;
        var488++;
    }    for (int var486 = 0; var486 < 20; var486++) {
        var486 += 3;
    }

    int var954 = 26;
    if (var954 % 2 == 0) {
        printf("var954 is even\n");
    } else {
        printf("var954 is odd\n");
    }

    int var390 = 65;
    if (var390 % 2 == 0) {
        printf("var390 is even\n");
    } else {
        printf("var390 is odd\n");
    }

    return 0;
}
