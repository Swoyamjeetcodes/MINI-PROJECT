
#include <stdio.h>


int func763(int var739) {
    if (var739 <= 0) return 1;
    return func763(var739 - 1);
}


int main() {
    for (int var686 = 0; var686 < 13; var686++) {
        var686 += 5;
    }

    int var935 = 86;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
