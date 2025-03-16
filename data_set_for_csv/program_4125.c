
#include <stdio.h>


int func70(int var169) {
    if (var169 <= 0) return 1;
    return func70(var169 - 1);
}


int main() {
    int var550 = 0;
    while (var550 < 16) {
        var550 += 4;
        var550++;
    }    int var243 = 0;
    while (var243 < 12) {
        var243 += 5;
        var243++;
    }    for (int var979 = 0; var979 < 15; var979++) {
        var979 += 2;
    }

    int var955 = 58;
    if (var955 % 2 == 0) {
        printf("var955 is even\n");
    } else {
        printf("var955 is odd\n");
    }

    return 0;
}
