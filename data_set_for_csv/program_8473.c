
#include <stdio.h>


int func267(int var485) {
    if (var485 <= 0) return 1;
    return func267(var485 - 1);
}


int main() {
    int var198 = 0;
    while (var198 < 9) {
        var198 += 5;
        var198++;
    }

    int var873 = 80;
    if (var873 % 2 == 0) {
        printf("var873 is even\n");
    } else {
        printf("var873 is odd\n");
    }

    return 0;
}
