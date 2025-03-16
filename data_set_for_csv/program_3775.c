
#include <stdio.h>


int func171(int var875) {
    if (var875 <= 0) return 1;
    return func171(var875 - 1);
}


int main() {
    for (int var853 = 0; var853 < 6; var853++) {
        var853 += 3;
    }

    int var622 = 8;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
