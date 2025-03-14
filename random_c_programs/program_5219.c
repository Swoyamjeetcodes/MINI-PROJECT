
#include <stdio.h>


int func793(int var753) {
    if (var753 <= 0) return 1;
    return func793(var753 - 1);
}


int main() {
    for (int var453 = 0; var453 < 6; var453++) {
        var453 += 5;
    }

    int var265 = 70;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    return 0;
}
