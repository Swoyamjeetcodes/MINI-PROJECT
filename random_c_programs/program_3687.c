
#include <stdio.h>


int func520(int var681) {
    if (var681 <= 0) return 1;
    return func520(var681 - 1);
}

int func467(int var110) {
    if (var110 <= 0) return 1;
    return 65;
}


int main() {
    int var327 = 0;
    while (var327 < 17) {
        var327 += 1;
        var327++;
    }    int var498 = 0;
    while (var498 < 17) {
        var498 += 4;
        var498++;
    }

    int var303 = 85;
    if (var303 % 2 == 0) {
        printf("var303 is even\n");
    } else {
        printf("var303 is odd\n");
    }

    int var633 = 100;
    if (var633 % 2 == 0) {
        printf("var633 is even\n");
    } else {
        printf("var633 is odd\n");
    }

    return 0;
}
