
#include <stdio.h>


int func426(int var232) {
    if (var232 <= 0) return 1;
    return func426(var232 - 1);
}

int func62(int var947) {
    if (var947 <= 0) return 1;
    return func62(var947 - 1);
}


int main() {
    for (int var226 = 0; var226 < 7; var226++) {
        var226 += 5;
    }

    int var503 = 85;
    if (var503 % 2 == 0) {
        printf("var503 is even\n");
    } else {
        printf("var503 is odd\n");
    }

    return 0;
}
