
#include <stdio.h>


int func695(int var937) {
    if (var937 <= 0) return 1;
    return func695(var937 - 1);
}


int main() {
    for (int var921 = 0; var921 < 19; var921++) {
        var921 += 1;
    }

    int var50 = 33;
    if (var50 % 2 == 0) {
        printf("var50 is even\n");
    } else {
        printf("var50 is odd\n");
    }

    return 0;
}
