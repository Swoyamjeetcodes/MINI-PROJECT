
#include <stdio.h>


int func824(int var620) {
    if (var620 <= 0) return 1;
    return func824(var620 - 1);
}


int main() {
    for (int var712 = 0; var712 < 12; var712++) {
        var712 += 2;
    }

    int var78 = 30;
    if (var78 % 2 == 0) {
        printf("var78 is even\n");
    } else {
        printf("var78 is odd\n");
    }

    return 0;
}
