#include<stdio.h>

int main()
{
float buyingprice, sellingprice,returnback;
printf("please enter the buying price");
scanf("%f",&buyingprice);
printf("please enter the selling price");
scanf("%f",&sellingprice);
if(buyingprice>sellingprice)
{
returnback=buyingprice-sellingprice;
printf("it's loss and your amount off loss is %f minus %f equals to %f", buyingprice, sellingprice, returnback);
}
else if(buyingprice<sellingprice)
{
returnback=sellingprice-buyingprice;
printf("it's profit and your amount off profit is %f minus %f equals to %f", sellingprice, buyingprice, returnback);
}
else
printf("you are not is loss and profit");
return 0;
}