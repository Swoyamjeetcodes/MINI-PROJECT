
#include <stdio.h>


int func653(int var756) {
    if (var756 <= 0) return 1;
    return func653(var756 - 1);
}


int main() {
    for (int var880 = 0; var880 < 8; var880++) {
        var880 += 4;
    }

    int var361 = 43;
    if (var361 % 2 == 0) {
        printf("var361 is even\n");
    } else {
        printf("var361 is odd\n");
    }

    return 0;
}
