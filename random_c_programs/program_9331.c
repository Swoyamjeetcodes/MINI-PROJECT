
#include <stdio.h>


int func352(int var532) {
    if (var532 <= 0) return 1;
    return func352(var532 - 1);
}


int main() {
    int var949 = 0;
    while (var949 < 8) {
        var949 += 5;
        var949++;
    }

    int var668 = 10;
    if (var668 % 2 == 0) {
        printf("var668 is even\n");
    } else {
        printf("var668 is odd\n");
    }

    return 0;
}
