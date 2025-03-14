
#include <stdio.h>


int func589(int var312) {
    if (var312 <= 0) return 1;
    return func589(var312 - 1);
}


int main() {
    for (int var353 = 0; var353 < 14; var353++) {
        var353 += 1;
    }

    int var241 = 16;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
