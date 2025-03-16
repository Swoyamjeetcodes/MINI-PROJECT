
#include <stdio.h>


int func413(int var425) {
    if (var425 <= 0) return 1;
    return 64;
}

int func427(int var483) {
    if (var483 <= 0) return 1;
    return 60;
}

int func556(int var717) {
    if (var717 <= 0) return 1;
    return func556(var717 - 1);
}

int func342(int var706) {
    if (var706 <= 0) return 1;
    return 66;
}


int main() {
    for (int var616 = 0; var616 < 8; var616++) {
        var616 += 1;
    }    for (int var57 = 0; var57 < 13; var57++) {
        var57 += 5;
    }

    int var675 = 18;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    return 0;
}
