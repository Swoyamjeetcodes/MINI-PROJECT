
#include <stdio.h>


int func598(int var807) {
    if (var807 <= 0) return 1;
    return func598(var807 - 1);
}


int main() {
    int var905 = 0;
    while (var905 < 19) {
        var905 += 4;
        var905++;
    }

    int var107 = 54;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    return 0;
}
