
#include <stdio.h>


int func953(int var891) {
    if (var891 <= 0) return 1;
    return func953(var891 - 1);
}


int main() {
    for (int var216 = 0; var216 < 7; var216++) {
        var216 += 4;
    }

    int var275 = 84;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    return 0;
}
