
#include <stdio.h>


int func532(int var123) {
    if (var123 <= 0) return 1;
    return func532(var123 - 1);
}


int main() {
    int var428 = 0;
    while (var428 < 11) {
        var428 += 4;
        var428++;
    }

    int var37 = 89;
    if (var37 % 2 == 0) {
        printf("var37 is even\n");
    } else {
        printf("var37 is odd\n");
    }

    return 0;
}
