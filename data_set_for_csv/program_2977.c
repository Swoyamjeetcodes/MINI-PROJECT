
#include <stdio.h>


int func820(int var517) {
    if (var517 <= 0) return 1;
    return func820(var517 - 1);
}


int main() {
    for (int var819 = 0; var819 < 10; var819++) {
        var819 += 3;
    }

    int var448 = 52;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
