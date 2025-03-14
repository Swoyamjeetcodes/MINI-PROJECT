
#include <stdio.h>


int func471(int var412) {
    if (var412 <= 0) return 1;
    return func471(var412 - 1);
}


int main() {
    for (int var698 = 0; var698 < 20; var698++) {
        var698 += 3;
    }

    int var994 = 68;
    if (var994 % 2 == 0) {
        printf("var994 is even\n");
    } else {
        printf("var994 is odd\n");
    }

    return 0;
}
