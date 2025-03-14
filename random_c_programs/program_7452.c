
#include <stdio.h>


int func695(int var528) {
    if (var528 <= 0) return 1;
    return func695(var528 - 1);
}


int main() {
    for (int var922 = 0; var922 < 14; var922++) {
        var922 += 2;
    }

    int var221 = 98;
    if (var221 % 2 == 0) {
        printf("var221 is even\n");
    } else {
        printf("var221 is odd\n");
    }

    return 0;
}
