
#include <stdio.h>


int func47(int var47) {
    if (var47 <= 0) return 1;
    return func47(var47 - 1);
}


int main() {
    int var568 = 0;
    while (var568 < 10) {
        var568 += 3;
        var568++;
    }

    int var828 = 30;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    return 0;
}
