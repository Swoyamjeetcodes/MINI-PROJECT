
#include <stdio.h>


int func108(int var528) {
    if (var528 <= 0) return 1;
    return func108(var528 - 1);
}


int main() {
    for (int var718 = 0; var718 < 16; var718++) {
        var718 += 5;
    }

    int var774 = 46;
    if (var774 % 2 == 0) {
        printf("var774 is even\n");
    } else {
        printf("var774 is odd\n");
    }

    return 0;
}
