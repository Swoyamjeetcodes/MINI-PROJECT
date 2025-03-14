
#include <stdio.h>


int func672(int var854) {
    if (var854 <= 0) return 1;
    return func672(var854 - 1);
}


int main() {
    for (int var647 = 0; var647 < 17; var647++) {
        var647 += 5;
    }

    int var545 = 75;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
