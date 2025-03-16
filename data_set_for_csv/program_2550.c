
#include <stdio.h>


int func410(int var806) {
    if (var806 <= 0) return 1;
    return func410(var806 - 1);
}


int main() {
    for (int var380 = 0; var380 < 6; var380++) {
        var380 += 5;
    }

    int var459 = 91;
    if (var459 % 2 == 0) {
        printf("var459 is even\n");
    } else {
        printf("var459 is odd\n");
    }

    return 0;
}
