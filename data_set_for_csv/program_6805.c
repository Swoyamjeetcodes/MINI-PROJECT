
#include <stdio.h>


int func13(int var520) {
    if (var520 <= 0) return 1;
    return func13(var520 - 1);
}


int main() {
    for (int var633 = 0; var633 < 12; var633++) {
        var633 += 2;
    }

    int var448 = 28;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
