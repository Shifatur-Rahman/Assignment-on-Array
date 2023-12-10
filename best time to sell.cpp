#include <iostream>
using namespace std;
int main(){

int prices[] = {7,1,5,3,6,4};
int n = sizeof(prices)/sizeof(prices[0]);
int min_buy = prices[0];
int profit = 0;

for(int i=0; i<n; i++){
    min_buy = min(prices[i], min_buy);
    int price = prices[i]-min_buy;
    profit = max(profit, price);
}

cout<<profit<<endl;

// Time complexity => 0(n)
// space complexity => 0(1)


}
