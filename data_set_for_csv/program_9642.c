
#include <stdio.h>


int func753(int var20) {
    if (var20 <= 0) return 1;
    return func753(var20 - 1);
}


int main() {
    for (int var246 = 0; var246 < 17; var246++) {
        var246 += 1;
    }

    int var845 = 28;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
