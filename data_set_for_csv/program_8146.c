
#include <stdio.h>


int func870(int var628) {
    if (var628 <= 0) return 1;
    return func870(var628 - 1);
}


int main() {
    int var229 = 0;
    while (var229 < 9) {
        var229 += 1;
        var229++;
    }

    int var633 = 52;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    return 0;
}
