
#include <stdio.h>


int func557(int var899) {
    if (var899 <= 0) return 1;
    return func557(var899 - 1);
}


int main() {
    int var438 = 0;
    while (var438 < 5) {
        var438 += 3;
        var438++;
    }    for (int var952 = 0; var952 < 18; var952++) {
        var952 += 4;
    }    for (int var776 = 0; var776 < 12; var776++) {
        var776 += 5;
    }

    int var283 = 42;
    if (var283 % 2 == 0) {
        printf("var283 is even\n");
    } else {
        printf("var283 is odd\n");
    }

    int var732 = 6;
    if (var732 % 2 == 0) {
        printf("var732 is even\n");
    } else {
        printf("var732 is odd\n");
    }

    return 0;
}
