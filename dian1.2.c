#include <stdio.h>
int main() {
	int payNum = 0;
	int current = 0;
	int total;
	printf("请输入你需要购买的货物的总价");
	scanf("%d", &total);
	while (payNum < total) {
                printf("请支付1元、2元或5元\n");
                scanf("%d", &current);
                payNum += current;
	}
	printf("找零%d元",payNum - total);

	return 0;
}
