#include <stdio.h>
#include <string.h>

int main() {
        char names[6][20] = {"", "", "", "", ""}; // 商品名称和通道
        int nums[6] = {0};
        int prices[6] = {0}; // 5个通道商品数目和价格
        char choose[4];
        int count = 0;
        // 进货
        printf("请选择您放入的商品、通道、价格、数目\n");
        scanf("%s", choose);
        while (strcmp(choose, "END") != 0) {
                int index, price, num;
                scanf("%d", &index);
                scanf("%d", &price);
                scanf("%d", &num);
                int i;
                if (strcmp(names[index], "") == 0) { // 没有商品，输入货物名与通道开始进货
                        strcpy(names[index], choose);
                        prices[index] = price;
		       	nums[index] += num;
                } else if (strcmp(names[index], choose) != 0) {
                        printf("一个通道只能装一种商品\n");// 提升不能把多个商品装一个通道
                } else {// 增加库存数目
                        nums[index] += num;
                }
                scanf("%s", choose);
        }                         
     	// 购买
        printf("请输入你想购买的商品、通道及数量\n");
        scanf("%s", choose);
        int total = 0;
        while (strcmp(choose, "END") != 0) {
                int index,  num;
                scanf("%d", &index);
                scanf("%d", &num);
                if (nums[index] >= num) {
                        total += (prices[index] * num);
                        nums[index] -= num;
                }
                        else {
                        printf("库存不足!\n");
                }
                scanf("%s", choose);
        }// 理解
        int payNum = 0;
        int current;
        while (payNum < total) {
                printf("请支付1元、2元或5元\n");
                scanf("%d", &current);
                payNum += current;
        }// 最终支付
        printf("找零%d", payNum - total);

        return 0;
}
