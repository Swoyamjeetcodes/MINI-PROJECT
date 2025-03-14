
#include <stdio.h>


int func803(int var813) {
    if (var813 <= 0) return 1;
    return func803(var813 - 1);
}


int main() {
    for (int var890 = 0; var890 < 6; var890++) {
        var890 += 1;
    }

    int var4 = 63;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    return 0;
}
