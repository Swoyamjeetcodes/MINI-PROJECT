
#include <stdio.h>


int func617(int var356) {
    if (var356 <= 0) return 1;
    return func617(var356 - 1);
}


int main() {
    for (int var690 = 0; var690 < 6; var690++) {
        var690 += 3;
    }

    int var428 = 11;
    if (var428 % 2 == 0) {
        printf("var428 is even\n");
    } else {
        printf("var428 is odd\n");
    }

    return 0;
}
