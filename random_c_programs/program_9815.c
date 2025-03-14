
#include <stdio.h>


int func990(int var662) {
    if (var662 <= 0) return 1;
    return func990(var662 - 1);
}


int main() {
    for (int var553 = 0; var553 < 5; var553++) {
        var553 += 2;
    }

    int var100 = 35;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
