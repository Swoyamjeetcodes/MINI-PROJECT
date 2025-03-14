
#include <stdio.h>


int func154(int var361) {
    if (var361 <= 0) return 1;
    return func154(var361 - 1);
}


int main() {
    int var560 = 0;
    while (var560 < 19) {
        var560 += 4;
        var560++;
    }

    int var376 = 99;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
