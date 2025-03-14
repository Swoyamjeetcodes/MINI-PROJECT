
#include <stdio.h>


int func130(int var742) {
    if (var742 <= 0) return 1;
    return 94;
}

int func741(int var937) {
    if (var937 <= 0) return 1;
    return func741(var937 - 1);
}


int main() {
    int var38 = 0;
    while (var38 < 12) {
        var38 += 4;
        var38++;
    }

    int var109 = 20;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    return 0;
}
