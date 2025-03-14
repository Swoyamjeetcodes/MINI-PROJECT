
#include <stdio.h>


int func388(int var727) {
    if (var727 <= 0) return 1;
    return func388(var727 - 1);
}


int main() {
    for (int var769 = 0; var769 < 15; var769++) {
        var769 += 5;
    }

    int var448 = 80;
    if (var448 % 2 == 0) {
        printf("var448 is even\n");
    } else {
        printf("var448 is odd\n");
    }

    return 0;
}
