
#include <stdio.h>


int func531(int var741) {
    if (var741 <= 0) return 1;
    return func531(var741 - 1);
}


int main() {
    for (int var539 = 0; var539 < 19; var539++) {
        var539 += 5;
    }

    int var508 = 37;
    if (var508 % 2 == 0) {
        printf("var508 is even\n");
    } else {
        printf("var508 is odd\n");
    }

    return 0;
}
