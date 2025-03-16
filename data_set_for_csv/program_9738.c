
#include <stdio.h>


int func428(int var256) {
    if (var256 <= 0) return 1;
    return func428(var256 - 1);
}


int main() {
    for (int var755 = 0; var755 < 18; var755++) {
        var755 += 1;
    }

    int var540 = 5;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
