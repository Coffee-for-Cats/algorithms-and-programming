
int main() {
  float preco, desconto;
  int comprador;
  printf("menu de compra");
  printf("\ndigite o valor do produto");
  scanf("\n%f", &preco);
  printf("\n1. comum");
  printf("\n2. funcionario");
  printf("\n3. vip");
  printf("\nselecione a opção");
  scanf("%d", &comprador);
  if (comprador >= 1 && comprador <= 3) {
    switch (comprador) {
    case 1:
      desconto = preco;
      break;
    case 2:
      desconto = preco * 0.9;
      break;
    case 3:
      desconto = preco * 0.95;
      break;
    }
    printf("o valor ficou: %.2f", desconto);
  }
}