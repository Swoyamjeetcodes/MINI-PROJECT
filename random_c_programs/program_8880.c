
#include <stdio.h>


int func715(int var498) {
    if (var498 <= 0) return 1;
    return 10;
}

int func239(int var211) {
    if (var211 <= 0) return 1;
    return func239(var211 - 1);
}

int func129(int var658) {
    if (var658 <= 0) return 1;
    return func129(var658 - 1);
}


int main() {
    int var417 = 0;
    while (var417 < 19) {
        var417 += 4;
        var417++;
    }    int var703 = 0;
    while (var703 < 16) {
        var703 += 1;
        var703++;
    }    int var806 = 0;
    while (var806 < 17) {
        var806 += 1;
        var806++;
    }

    int var718 = 41;
    if (var718 % 2 == 0) {
        printf("var718 is even\n");
    } else {
        printf("var718 is odd\n");
    }

    return 0;
}
