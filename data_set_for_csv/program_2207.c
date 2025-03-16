
#include <stdio.h>


int func198(int var800) {
    if (var800 <= 0) return 1;
    return func198(var800 - 1);
}


int main() {
    for (int var937 = 0; var937 < 9; var937++) {
        var937 += 3;
    }

    int var828 = 61;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var443 = 83;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
