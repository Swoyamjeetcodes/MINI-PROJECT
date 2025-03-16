
#include <stdio.h>


int func673(int var501) {
    if (var501 <= 0) return 1;
    return func673(var501 - 1);
}

int func912(int var185) {
    if (var185 <= 0) return 1;
    return func912(var185 - 1);
}


int main() {
    int var733 = 0;
    while (var733 < 13) {
        var733 += 3;
        var733++;
    }

    int var845 = 24;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
