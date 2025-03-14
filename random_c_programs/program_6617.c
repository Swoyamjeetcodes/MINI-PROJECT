
#include <stdio.h>


int func952(int var958) {
    if (var958 <= 0) return 1;
    return 9;
}

int func41(int var483) {
    if (var483 <= 0) return 1;
    return func41(var483 - 1);
}

int func598(int var623) {
    if (var623 <= 0) return 1;
    return func598(var623 - 1);
}


int main() {
    int var798 = 0;
    while (var798 < 7) {
        var798 += 2;
        var798++;
    }

    int var821 = 78;
    if (var821 % 2 == 0) {
        printf("var821 is even\n");
    } else {
        printf("var821 is odd\n");
    }

    return 0;
}
