
#include <stdio.h>


int func461(int var741) {
    if (var741 <= 0) return 1;
    return func461(var741 - 1);
}

int func204(int var667) {
    if (var667 <= 0) return 1;
    return 31;
}

int func861(int var541) {
    if (var541 <= 0) return 1;
    return func861(var541 - 1);
}

int func662(int var545) {
    if (var545 <= 0) return 1;
    return 45;
}

int func129(int var956) {
    if (var956 <= 0) return 1;
    return func129(var956 - 1);
}


int main() {
    for (int var328 = 0; var328 < 14; var328++) {
        var328 += 4;
    }

    int var543 = 71;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    return 0;
}
