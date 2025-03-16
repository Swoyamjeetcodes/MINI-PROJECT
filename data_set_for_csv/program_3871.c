
#include <stdio.h>


int func830(int var947) {
    if (var947 <= 0) return 1;
    return func830(var947 - 1);
}

int func284(int var188) {
    if (var188 <= 0) return 1;
    return 10;
}

int func437(int var342) {
    if (var342 <= 0) return 1;
    return 48;
}

int func263(int var756) {
    if (var756 <= 0) return 1;
    return func263(var756 - 1);
}

int func542(int var122) {
    if (var122 <= 0) return 1;
    return 25;
}


int main() {
    for (int var331 = 0; var331 < 19; var331++) {
        var331 += 5;
    }

    int var425 = 77;
    if (var425 % 2 == 0) {
        printf("var425 is even\n");
    } else {
        printf("var425 is odd\n");
    }

    int var646 = 46;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
