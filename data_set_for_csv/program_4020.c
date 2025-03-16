
#include <stdio.h>


int func848(int var648) {
    if (var648 <= 0) return 1;
    return func848(var648 - 1);
}


int main() {
    for (int var31 = 0; var31 < 12; var31++) {
        var31 += 2;
    }

    int var965 = 7;
    if (var965 % 2 == 0) {
        printf("var965 is even\n");
    } else {
        printf("var965 is odd\n");
    }

    return 0;
}
