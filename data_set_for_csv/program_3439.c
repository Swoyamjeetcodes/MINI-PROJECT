
#include <stdio.h>


int func548(int var924) {
    if (var924 <= 0) return 1;
    return func548(var924 - 1);
}


int main() {
    int var279 = 0;
    while (var279 < 20) {
        var279 += 3;
        var279++;
    }

    int var956 = 58;
    if (var956 % 2 == 0) {
        printf("var956 is even\n");
    } else {
        printf("var956 is odd\n");
    }

    return 0;
}
