
#include <stdio.h>


int func244(int var707) {
    if (var707 <= 0) return 1;
    return func244(var707 - 1);
}


int main() {
    for (int var134 = 0; var134 < 19; var134++) {
        var134 += 4;
    }

    int var591 = 2;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    return 0;
}
