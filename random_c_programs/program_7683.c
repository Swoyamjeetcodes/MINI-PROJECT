
#include <stdio.h>


int func881(int var184) {
    if (var184 <= 0) return 1;
    return func881(var184 - 1);
}


int main() {
    for (int var240 = 0; var240 < 10; var240++) {
        var240 += 3;
    }

    int var693 = 2;
    if (var693 % 2 == 0) {
        printf("var693 is even\n");
    } else {
        printf("var693 is odd\n");
    }

    return 0;
}
