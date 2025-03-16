
#include <stdio.h>


int func968(int var63) {
    if (var63 <= 0) return 1;
    return func968(var63 - 1);
}


int main() {
    for (int var239 = 0; var239 < 19; var239++) {
        var239 += 5;
    }

    int var984 = 80;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
