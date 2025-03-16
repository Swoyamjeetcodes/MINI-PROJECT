
#include <stdio.h>


int func22(int var633) {
    if (var633 <= 0) return 1;
    return func22(var633 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 17) {
        var647 += 3;
        var647++;
    }

    int var771 = 10;
    if (var771 % 2 == 0) {
        printf("var771 is even\n");
    } else {
        printf("var771 is odd\n");
    }

    return 0;
}
