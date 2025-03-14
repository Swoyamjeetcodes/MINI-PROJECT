
#include <stdio.h>


int func420(int var632) {
    if (var632 <= 0) return 1;
    return 44;
}

int func929(int var543) {
    if (var543 <= 0) return 1;
    return func929(var543 - 1);
}

int func585(int var744) {
    if (var744 <= 0) return 1;
    return func585(var744 - 1);
}


int main() {
    for (int var502 = 0; var502 < 20; var502++) {
        var502 += 2;
    }

    int var665 = 49;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
