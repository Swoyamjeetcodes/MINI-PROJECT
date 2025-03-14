
#include <stdio.h>


int func905(int var136) {
    if (var136 <= 0) return 1;
    return func905(var136 - 1);
}


int main() {
    for (int var300 = 0; var300 < 12; var300++) {
        var300 += 4;
    }

    int var675 = 89;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    return 0;
}
