
#include <stdio.h>


int func21(int var168) {
    if (var168 <= 0) return 1;
    return func21(var168 - 1);
}


int main() {
    for (int var727 = 0; var727 < 8; var727++) {
        var727 += 4;
    }

    int var753 = 30;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    return 0;
}
