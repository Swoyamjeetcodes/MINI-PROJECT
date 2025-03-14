
#include <stdio.h>


int func206(int var591) {
    if (var591 <= 0) return 1;
    return func206(var591 - 1);
}


int main() {
    for (int var896 = 0; var896 < 17; var896++) {
        var896 += 3;
    }

    int var809 = 32;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
