
#include <stdio.h>


int func599(int var727) {
    if (var727 <= 0) return 1;
    return func599(var727 - 1);
}


int main() {
    for (int var688 = 0; var688 < 10; var688++) {
        var688 += 4;
    }

    int var672 = 66;
    if (var672 % 2 == 0) {
        printf("var672 is even\n");
    } else {
        printf("var672 is odd\n");
    }

    return 0;
}
