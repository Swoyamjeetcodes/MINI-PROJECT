
#include <stdio.h>


int func803(int var996) {
    if (var996 <= 0) return 1;
    return func803(var996 - 1);
}


int main() {
    for (int var774 = 0; var774 < 5; var774++) {
        var774 += 3;
    }

    int var590 = 30;
    if (var590 % 2 == 0) {
        printf("var590 is even\n");
    } else {
        printf("var590 is odd\n");
    }

    return 0;
}
