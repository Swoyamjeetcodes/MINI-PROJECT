
#include <stdio.h>


int func789(int var546) {
    if (var546 <= 0) return 1;
    return func789(var546 - 1);
}


int main() {
    for (int var585 = 0; var585 < 17; var585++) {
        var585 += 3;
    }

    int var796 = 22;
    if (var796 % 2 == 0) {
        printf("var796 is even\n");
    } else {
        printf("var796 is odd\n");
    }

    int var594 = 88;
    if (var594 % 2 == 0) {
        printf("var594 is even\n");
    } else {
        printf("var594 is odd\n");
    }

    return 0;
}
