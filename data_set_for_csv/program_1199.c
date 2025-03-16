
#include <stdio.h>


int func265(int var633) {
    if (var633 <= 0) return 1;
    return func265(var633 - 1);
}


int main() {
    for (int var383 = 0; var383 < 11; var383++) {
        var383 += 4;
    }

    int var641 = 13;
    if (var641 % 2 == 0) {
        printf("var641 is even\n");
    } else {
        printf("var641 is odd\n");
    }

    return 0;
}
