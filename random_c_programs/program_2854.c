
#include <stdio.h>


int func41(int var935) {
    if (var935 <= 0) return 1;
    return func41(var935 - 1);
}


int main() {
    int var964 = 0;
    while (var964 < 20) {
        var964 += 4;
        var964++;
    }

    int var44 = 22;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
