
#include <stdio.h>


int func535(int var533) {
    if (var533 <= 0) return 1;
    return func535(var533 - 1);
}


int main() {
    int var900 = 0;
    while (var900 < 10) {
        var900 += 4;
        var900++;
    }

    int var646 = 89;
    if (var646 % 2 == 0) {
        printf("var646 is even\n");
    } else {
        printf("var646 is odd\n");
    }

    return 0;
}
