
#include <stdio.h>


int func50(int var148) {
    if (var148 <= 0) return 1;
    return func50(var148 - 1);
}


int main() {
    for (int var743 = 0; var743 < 19; var743++) {
        var743 += 3;
    }

    int var858 = 92;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
