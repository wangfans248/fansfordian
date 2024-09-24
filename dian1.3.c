#include <stdio.h>
#include <string.h>
int main() {
	char name[5];
 	int aisles;
        int price;
        int number;
	char choose[4];
	int total = 0;
        printf("请输入摆放物品的种类、通道、价格以及数目\n");
        scanf("%s %d %d %d", choose ,&aisles ,&price, &number);
	strcpy(name, choose);
       	printf("请输入你想购买的商品,输入END结束购买\n");
	scanf("%s", choose);
        while (strcmp(choose, "END" ) != 0) {
		printf("请输入你想要购买的数量\n");
		int num;
		scanf("%d", &num);
		if ( number >=num) {
			total += num * price;
			number -= num;
		}
		else {
			printf("超出库存，请重新购买\n");
		}
	       	printf("输入任意键继续购买,输入END结束购买\n");
	       	scanf("%s", choose);
	}
        int payNum = 0;
        int current;
	while (payNum < total) {
	       printf("请投入1元、2元或5元\n");
               scanf("%d", &current);
	       payNum += current;
	}
        printf("找零%d元\n", payNum - total);

	return 0;
	}	


