#include <stdio.h>
int main(){
    int n1,n2;
    double r;
    printf("Digite o primeiro numero\n");
    scanf("%d",&n1);

    printf("Digite o segundo numero\n");
    scanf("%d",&n2);

    r = n1 + n2;
    printf("%d + %d = %f\n",n1,n2,r);

    r = n1 - n2;
    printf("%d - %d = %f\n",n1,n2,r);

    r = n1 * n2;
    printf("%d * %d = %f\n",n1,n2,r);

    r = (double)n1 / n2;
    printf("%d / %d = %f\n",n1,n2,r);
    // int / int nao consegue ter um valor quebrado.
    //https://clang.llvm.org/extra/clang-tidy/checks/bugprone/integer-division.html
    // usando type casting e possivel obter o valor correto
}

