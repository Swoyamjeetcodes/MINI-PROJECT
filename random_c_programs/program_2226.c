
#include <stdio.h>


int func768(int var149) {
    if (var149 <= 0) return 1;
    return func768(var149 - 1);
}


int main() {
    for (int var938 = 0; var938 < 15; var938++) {
        var938 += 2;
    }

    int var744 = 59;
    if (var744 % 2 == 0) {
        printf("var744 is even\n");
    } else {
        printf("var744 is odd\n");
    }

    return 0;
}
