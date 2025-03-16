
#include <stdio.h>


int func711(int var587) {
    if (var587 <= 0) return 1;
    return func711(var587 - 1);
}

int func230(int var559) {
    if (var559 <= 0) return 1;
    return func230(var559 - 1);
}

int func704(int var544) {
    if (var544 <= 0) return 1;
    return 22;
}

int func981(int var648) {
    if (var648 <= 0) return 1;
    return func981(var648 - 1);
}

int func39(int var554) {
    if (var554 <= 0) return 1;
    return 17;
}


int main() {
    int var756 = 0;
    while (var756 < 12) {
        var756 += 3;
        var756++;
    }    for (int var272 = 0; var272 < 15; var272++) {
        var272 += 2;
    }

    int var567 = 72;
    if (var567 % 2 == 0) {
        printf("var567 is even\n");
    } else {
        printf("var567 is odd\n");
    }

    return 0;
}
