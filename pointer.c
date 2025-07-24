#include <stdio.h>
#include <stdlib.h>

int main() {
	struct Product {
		char *name;
		unsigned int price;
		unsigned int stock;
		float weight;
	};

	struct Product *buku = calloc(2, sizeof(struct Product));

	buku->name = "Pemrograman C untuk pemula";
	buku->price = 900000;
	buku->stock = 5;
	buku->weight = 1.2;

	printf("## DETAIL PRODUK ## \n");
	printf("name : %s \n", buku->name);
	printf("harga : %d \n", buku->price);
	printf("stok : %d \n", buku->stock);
	printf("berat: %.2f kg \n", buku->weight);
}
