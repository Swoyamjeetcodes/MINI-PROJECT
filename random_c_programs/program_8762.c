
#include <stdio.h>


int func623(int var448) {
    if (var448 <= 0) return 1;
    return func623(var448 - 1);
}


int main() {
    for (int var355 = 0; var355 < 10; var355++) {
        var355 += 3;
    }

    int var840 = 70;
    if (var840 % 2 == 0) {
        printf("var840 is even\n");
    } else {
        printf("var840 is odd\n");
    }

    return 0;
}
