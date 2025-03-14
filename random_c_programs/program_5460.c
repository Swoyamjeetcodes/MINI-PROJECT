
#include <stdio.h>


int func149(int var953) {
    if (var953 <= 0) return 1;
    return func149(var953 - 1);
}


int main() {
    int var346 = 0;
    while (var346 < 13) {
        var346 += 2;
        var346++;
    }

    int var264 = 50;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    return 0;
}
