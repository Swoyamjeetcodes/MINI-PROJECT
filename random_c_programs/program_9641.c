
#include <stdio.h>


int func510(int var407) {
    if (var407 <= 0) return 1;
    return func510(var407 - 1);
}


int main() {
    for (int var483 = 0; var483 < 13; var483++) {
        var483 += 1;
    }

    int var545 = 86;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
