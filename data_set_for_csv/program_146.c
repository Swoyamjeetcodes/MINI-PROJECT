
#include <stdio.h>


int func491(int var965) {
    if (var965 <= 0) return 1;
    return func491(var965 - 1);
}


int main() {
    for (int var634 = 0; var634 < 13; var634++) {
        var634 += 2;
    }

    int var746 = 16;
    if (var746 % 2 == 0) {
        printf("var746 is even\n");
    } else {
        printf("var746 is odd\n");
    }

    return 0;
}
