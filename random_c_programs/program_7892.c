
#include <stdio.h>


int func176(int var355) {
    if (var355 <= 0) return 1;
    return func176(var355 - 1);
}


int main() {
    int var631 = 0;
    while (var631 < 12) {
        var631 += 1;
        var631++;
    }

    int var803 = 31;
    if (var803 % 2 == 0) {
        printf("var803 is even\n");
    } else {
        printf("var803 is odd\n");
    }

    return 0;
}
