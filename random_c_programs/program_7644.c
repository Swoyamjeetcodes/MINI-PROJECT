
#include <stdio.h>


int func618(int var856) {
    if (var856 <= 0) return 1;
    return func618(var856 - 1);
}

int func288(int var710) {
    if (var710 <= 0) return 1;
    return func288(var710 - 1);
}


int main() {
    for (int var391 = 0; var391 < 16; var391++) {
        var391 += 1;
    }

    int var294 = 84;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    return 0;
}
