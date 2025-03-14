
#include <stdio.h>


int func723(int var444) {
    if (var444 <= 0) return 1;
    return func723(var444 - 1);
}


int main() {
    for (int var596 = 0; var596 < 17; var596++) {
        var596 += 3;
    }

    int var506 = 10;
    if (var506 % 2 == 0) {
        printf("var506 is even\n");
    } else {
        printf("var506 is odd\n");
    }

    return 0;
}
