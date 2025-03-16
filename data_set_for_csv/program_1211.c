
#include <stdio.h>


int func199(int var394) {
    if (var394 <= 0) return 1;
    return func199(var394 - 1);
}

int func307(int var636) {
    if (var636 <= 0) return 1;
    return func307(var636 - 1);
}

int func77(int var924) {
    if (var924 <= 0) return 1;
    return 86;
}

int func623(int var517) {
    if (var517 <= 0) return 1;
    return func623(var517 - 1);
}

int func721(int var46) {
    if (var46 <= 0) return 1;
    return 46;
}


int main() {
    int var586 = 0;
    while (var586 < 7) {
        var586 += 5;
        var586++;
    }

    int var253 = 58;
    if (var253 % 2 == 0) {
        printf("var253 is even\n");
    } else {
        printf("var253 is odd\n");
    }

    int var715 = 3;
    if (var715 % 2 == 0) {
        printf("var715 is even\n");
    } else {
        printf("var715 is odd\n");
    }

    return 0;
}
