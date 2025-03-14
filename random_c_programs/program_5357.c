
#include <stdio.h>


int func295(int var218) {
    if (var218 <= 0) return 1;
    return func295(var218 - 1);
}


int main() {
    for (int var689 = 0; var689 < 16; var689++) {
        var689 += 2;
    }

    int var164 = 6;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
