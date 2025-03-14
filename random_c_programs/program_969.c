
#include <stdio.h>


int func305(int var164) {
    if (var164 <= 0) return 1;
    return func305(var164 - 1);
}


int main() {
    int var936 = 0;
    while (var936 < 16) {
        var936 += 1;
        var936++;
    }

    int var728 = 37;
    if (var728 % 2 == 0) {
        printf("var728 is even\n");
    } else {
        printf("var728 is odd\n");
    }

    return 0;
}
