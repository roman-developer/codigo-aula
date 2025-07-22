#include <stdio.h>

float total_by_product(float price, int quantity) {
    return price * quantity;
}

int main() {
  int products_number;
  float total_sales = 0.0;
  
  printf("Introduzca el total de productos: ");
  scanf("%d", &products_number);

  for(int i=0; i< products_number; i++){
    int quantity;
    char product_name[50];
    float product_price;

    printf("\nProducto %d:\n", i + 1);

    printf("\nIntroduzca nombre del producto: ");
    scanf("%s", product_name);
    printf("\nIntroduzca precio del producto: ");
    scanf("%f", &product_price);
    printf("\nIntroduzca cantidad vendida del producto: ");
    scanf("%d", &quantity);

    if(quantity < 5){
      printf("Ventas bajas!\n");
    }

    float total = total_by_product(product_price, quantity);
    total_sales += total;

    printf("Total para %s: %.2f €\n", product_name, total);
  }

  printf("\nTOTAL GENERAL DE VENTAS: %.2f €\n", total_sales);
  return 0;
}