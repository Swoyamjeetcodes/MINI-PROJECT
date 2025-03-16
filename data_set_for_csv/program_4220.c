
#include <stdio.h>


int func673(int var531) {
    if (var531 <= 0) return 1;
    return func673(var531 - 1);
}


int main() {
    int var290 = 0;
    while (var290 < 11) {
        var290 += 3;
        var290++;
    }    for (int var216 = 0; var216 < 10; var216++) {
        var216 += 3;
    }    for (int var805 = 0; var805 < 15; var805++) {
        var805 += 2;
    }

    int var186 = 71;
    if (var186 % 2 == 0) {
        printf("var186 is even\n");
    } else {
        printf("var186 is odd\n");
    }

    int var637 = 23;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    int var956 = 28;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
