
#include <stdio.h>


int func900(int var329) {
    if (var329 <= 0) return 1;
    return func900(var329 - 1);
}


int main() {
    int var718 = 0;
    while (var718 < 12) {
        var718 += 5;
        var718++;
    }

    int var496 = 49;
    if (var496 % 2 == 0) {
        printf("var496 is even\n");
    } else {
        printf("var496 is odd\n");
    }

    return 0;
}
