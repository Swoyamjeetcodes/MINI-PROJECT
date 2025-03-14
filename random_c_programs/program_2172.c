
#include <stdio.h>


int func706(int var93) {
    if (var93 <= 0) return 1;
    return 56;
}

int func751(int var806) {
    if (var806 <= 0) return 1;
    return 40;
}

int func614(int var502) {
    if (var502 <= 0) return 1;
    return func614(var502 - 1);
}


int main() {
    int var605 = 0;
    while (var605 < 16) {
        var605 += 5;
        var605++;
    }

    int var866 = 68;
    if (var866 % 2 == 0) {
        printf("var866 is even\n");
    } else {
        printf("var866 is odd\n");
    }

    return 0;
}
