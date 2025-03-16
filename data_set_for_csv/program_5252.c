
#include <stdio.h>


int func171(int var567) {
    if (var567 <= 0) return 1;
    return func171(var567 - 1);
}


int main() {
    for (int var207 = 0; var207 < 5; var207++) {
        var207 += 1;
    }

    int var141 = 74;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    return 0;
}
