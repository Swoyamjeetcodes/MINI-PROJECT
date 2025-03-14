
#include <stdio.h>


int func333(int var552) {
    if (var552 <= 0) return 1;
    return func333(var552 - 1);
}


int main() {
    for (int var360 = 0; var360 < 15; var360++) {
        var360 += 3;
    }

    int var342 = 51;
    if (var342 % 2 == 0) {
        printf("var342 is even\n");
    } else {
        printf("var342 is odd\n");
    }

    return 0;
}
