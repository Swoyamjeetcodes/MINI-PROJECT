
#include <stdio.h>


int func682(int var929) {
    if (var929 <= 0) return 1;
    return func682(var929 - 1);
}


int main() {
    int var270 = 0;
    while (var270 < 13) {
        var270 += 1;
        var270++;
    }

    int var836 = 98;
    if (var836 % 2 == 0) {
        printf("var836 is even\n");
    } else {
        printf("var836 is odd\n");
    }

    return 0;
}
