
#include <stdio.h>


int func827(int var447) {
    if (var447 <= 0) return 1;
    return func827(var447 - 1);
}


int main() {
    for (int var11 = 0; var11 < 5; var11++) {
        var11 += 5;
    }

    int var964 = 13;
    if (var964 % 2 == 0) {
        printf("var964 is even\n");
    } else {
        printf("var964 is odd\n");
    }

    return 0;
}
