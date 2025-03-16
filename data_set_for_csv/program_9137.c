
#include <stdio.h>


int func231(int var607) {
    if (var607 <= 0) return 1;
    return func231(var607 - 1);
}


int main() {
    int var67 = 0;
    while (var67 < 5) {
        var67 += 5;
        var67++;
    }    for (int var318 = 0; var318 < 7; var318++) {
        var318 += 5;
    }

    int var184 = 35;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    return 0;
}
