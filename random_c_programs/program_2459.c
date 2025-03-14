
#include <stdio.h>


int func481(int var692) {
    if (var692 <= 0) return 1;
    return func481(var692 - 1);
}


int main() {
    for (int var293 = 0; var293 < 5; var293++) {
        var293 += 5;
    }    for (int var643 = 0; var643 < 6; var643++) {
        var643 += 5;
    }

    int var363 = 59;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    return 0;
}
