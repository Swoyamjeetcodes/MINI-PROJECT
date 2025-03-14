
#include <stdio.h>


int func847(int var109) {
    if (var109 <= 0) return 1;
    return func847(var109 - 1);
}


int main() {
    for (int var326 = 0; var326 < 20; var326++) {
        var326 += 5;
    }

    int var403 = 48;
    if (var403 % 2 == 0) {
        printf("var403 is even\n");
    } else {
        printf("var403 is odd\n");
    }

    return 0;
}
