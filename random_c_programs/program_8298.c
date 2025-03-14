
#include <stdio.h>


int func882(int var203) {
    if (var203 <= 0) return 1;
    return func882(var203 - 1);
}


int main() {
    int var966 = 0;
    while (var966 < 19) {
        var966 += 3;
        var966++;
    }

    int var87 = 8;
    if (var87 % 2 == 0) {
        printf("var87 is even\n");
    } else {
        printf("var87 is odd\n");
    }

    return 0;
}
