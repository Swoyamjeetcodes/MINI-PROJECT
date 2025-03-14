
#include <stdio.h>


int func477(int var902) {
    if (var902 <= 0) return 1;
    return func477(var902 - 1);
}


int main() {
    for (int var387 = 0; var387 < 15; var387++) {
        var387 += 3;
    }

    int var911 = 77;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    return 0;
}
