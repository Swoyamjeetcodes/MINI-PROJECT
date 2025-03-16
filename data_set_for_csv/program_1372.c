
#include <stdio.h>


int func25(int var641) {
    if (var641 <= 0) return 1;
    return func25(var641 - 1);
}


int main() {
    int var173 = 0;
    while (var173 < 13) {
        var173 += 1;
        var173++;
    }

    int var541 = 8;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    return 0;
}
