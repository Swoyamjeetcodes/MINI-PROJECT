
#include <stdio.h>


int func365(int var121) {
    if (var121 <= 0) return 1;
    return func365(var121 - 1);
}


int main() {
    for (int var203 = 0; var203 < 17; var203++) {
        var203 += 3;
    }

    int var890 = 76;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    return 0;
}
