
#include <stdio.h>


int func551(int var223) {
    if (var223 <= 0) return 1;
    return func551(var223 - 1);
}


int main() {
    int var243 = 0;
    while (var243 < 7) {
        var243 += 5;
        var243++;
    }

    int var57 = 5;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
