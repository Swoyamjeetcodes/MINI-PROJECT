
#include <stdio.h>


int func288(int var428) {
    if (var428 <= 0) return 1;
    return func288(var428 - 1);
}


int main() {
    int var933 = 0;
    while (var933 < 8) {
        var933 += 3;
        var933++;
    }

    int var957 = 66;
    if (var957 % 2 == 0) {
        printf("var957 is even\n");
    } else {
        printf("var957 is odd\n");
    }

    return 0;
}
