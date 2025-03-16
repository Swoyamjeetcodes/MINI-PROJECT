
#include <stdio.h>


int func338(int var471) {
    if (var471 <= 0) return 1;
    return func338(var471 - 1);
}


int main() {
    for (int var937 = 0; var937 < 6; var937++) {
        var937 += 5;
    }

    int var478 = 79;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    return 0;
}
