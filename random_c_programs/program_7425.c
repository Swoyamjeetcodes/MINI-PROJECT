
#include <stdio.h>


int func935(int var70) {
    if (var70 <= 0) return 1;
    return func935(var70 - 1);
}


int main() {
    int var807 = 0;
    while (var807 < 16) {
        var807 += 1;
        var807++;
    }

    int var585 = 0;
    if (var585 % 2 == 0) {
        printf("var585 is even\n");
    } else {
        printf("var585 is odd\n");
    }

    return 0;
}
