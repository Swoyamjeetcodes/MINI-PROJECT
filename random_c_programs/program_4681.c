
#include <stdio.h>


int func376(int var31) {
    if (var31 <= 0) return 1;
    return func376(var31 - 1);
}


int main() {
    int var558 = 0;
    while (var558 < 17) {
        var558 += 5;
        var558++;
    }

    int var201 = 83;
    if (var201 % 2 == 0) {
        printf("var201 is even\n");
    } else {
        printf("var201 is odd\n");
    }

    return 0;
}
