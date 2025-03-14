
#include <stdio.h>


int func226(int var17) {
    if (var17 <= 0) return 1;
    return 62;
}

int func201(int var626) {
    if (var626 <= 0) return 1;
    return func201(var626 - 1);
}


int main() {
    for (int var911 = 0; var911 < 7; var911++) {
        var911 += 4;
    }    int var566 = 0;
    while (var566 < 15) {
        var566 += 4;
        var566++;
    }

    int var678 = 87;
    if (var678 % 2 == 0) {
        printf("var678 is even\n");
    } else {
        printf("var678 is odd\n");
    }

    int var332 = 49;
    if (var332 % 2 == 0) {
        printf("var332 is even\n");
    } else {
        printf("var332 is odd\n");
    }

    int var637 = 40;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    return 0;
}
