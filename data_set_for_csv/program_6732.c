
#include <stdio.h>


int func649(int var753) {
    if (var753 <= 0) return 1;
    return func649(var753 - 1);
}


int main() {
    for (int var725 = 0; var725 < 7; var725++) {
        var725 += 2;
    }

    int var472 = 68;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
