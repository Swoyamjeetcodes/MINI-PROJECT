
#include <stdio.h>


int func41(int var601) {
    if (var601 <= 0) return 1;
    return func41(var601 - 1);
}


int main() {
    int var361 = 0;
    while (var361 < 20) {
        var361 += 3;
        var361++;
    }

    int var371 = 63;
    if (var371 % 2 == 0) {
        printf("var371 is even\n");
    } else {
        printf("var371 is odd\n");
    }

    return 0;
}
