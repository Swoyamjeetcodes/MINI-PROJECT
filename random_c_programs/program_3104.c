
#include <stdio.h>


int func746(int var522) {
    if (var522 <= 0) return 1;
    return 65;
}

int func235(int var754) {
    if (var754 <= 0) return 1;
    return func235(var754 - 1);
}


int main() {
    int var708 = 0;
    while (var708 < 14) {
        var708 += 4;
        var708++;
    }    for (int var878 = 0; var878 < 7; var878++) {
        var878 += 3;
    }

    int var320 = 57;
    if (var320 % 2 == 0) {
        printf("var320 is even\n");
    } else {
        printf("var320 is odd\n");
    }

    int var276 = 53;
    if (var276 % 2 == 0) {
        printf("var276 is even\n");
    } else {
        printf("var276 is odd\n");
    }

    int var805 = 13;
    if (var805 % 2 == 0) {
        printf("var805 is even\n");
    } else {
        printf("var805 is odd\n");
    }

    return 0;
}
