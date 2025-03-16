
#include <stdio.h>


int func318(int var789) {
    if (var789 <= 0) return 1;
    return func318(var789 - 1);
}


int main() {
    for (int var155 = 0; var155 < 13; var155++) {
        var155 += 4;
    }    for (int var413 = 0; var413 < 5; var413++) {
        var413 += 4;
    }

    int var911 = 57;
    if (var911 % 2 == 0) {
        printf("var911 is even\n");
    } else {
        printf("var911 is odd\n");
    }

    int var628 = 40;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
