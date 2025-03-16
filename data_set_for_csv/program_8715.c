
#include <stdio.h>


int func775(int var244) {
    if (var244 <= 0) return 1;
    return func775(var244 - 1);
}


int main() {
    for (int var936 = 0; var936 < 20; var936++) {
        var936 += 5;
    }

    int var290 = 66;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    return 0;
}
