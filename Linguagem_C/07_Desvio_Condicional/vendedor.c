#include <stdio.h>

double calculadora_salario(double salario_base, double vendas, double meta) {
    double salario;
    salario = salario_base + vendas * 0.05;
    if (vendas >= meta) {
        salario = salario + ((vendas - meta) * 0.10);
    }
    if (salario > 1200.00) {
        salario = salario - (salario_base * 0.15);
    }
    return salario;
}

int main() {
    double salario, salario_base, vendas, meta;
    scanf("%lf", &salario_base);
    scanf("%lf", &vendas);
    scanf("%lf", &meta);
    salario = calculadora_salario(salario_base, vendas, meta);
    printf("%.2f", salario);
    return 0;
}
