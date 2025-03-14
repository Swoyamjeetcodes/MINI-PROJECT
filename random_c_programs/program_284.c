
#include <stdio.h>


int func241(int var339) {
    if (var339 <= 0) return 1;
    return func241(var339 - 1);
}


int main() {
    for (int var846 = 0; var846 < 8; var846++) {
        var846 += 1;
    }

    int var159 = 12;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
