
#include <stdio.h>


int func767(int var522) {
    if (var522 <= 0) return 1;
    return func767(var522 - 1);
}


int main() {
    for (int var446 = 0; var446 < 20; var446++) {
        var446 += 3;
    }

    int var796 = 62;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    return 0;
}
