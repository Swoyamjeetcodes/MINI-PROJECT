
#include <stdio.h>


int func368(int var391) {
    if (var391 <= 0) return 1;
    return func368(var391 - 1);
}


int main() {
    int var3 = 0;
    while (var3 < 8) {
        var3 += 2;
        var3++;
    }

    int var739 = 26;
    if (var739 % 2 == 0) {
        printf("var739 is even\n");
    } else {
        printf("var739 is odd\n");
    }

    return 0;
}
