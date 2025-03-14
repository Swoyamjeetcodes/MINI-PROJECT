
#include <stdio.h>


int func164(int var70) {
    if (var70 <= 0) return 1;
    return func164(var70 - 1);
}


int main() {
    int var489 = 0;
    while (var489 < 8) {
        var489 += 2;
        var489++;
    }

    int var758 = 37;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var538 = 74;
    if (var538 % 2 == 0) {
        printf("var538 is even\n");
    } else {
        printf("var538 is odd\n");
    }

    return 0;
}
