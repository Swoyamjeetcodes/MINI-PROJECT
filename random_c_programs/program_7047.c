
#include <stdio.h>


int func455(int var842) {
    if (var842 <= 0) return 1;
    return func455(var842 - 1);
}


int main() {
    for (int var562 = 0; var562 < 20; var562++) {
        var562 += 1;
    }    for (int var773 = 0; var773 < 15; var773++) {
        var773 += 5;
    }

    int var42 = 51;
    if (var42 % 2 == 0) {
        printf("var42 is even\n");
    } else {
        printf("var42 is odd\n");
    }

    return 0;
}
