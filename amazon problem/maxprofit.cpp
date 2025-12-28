    #include<iostream>
    #include<vector>
    #include<climits>
    using namespace std;

    int maxProfit(vector<int>& prices) {
       int  bystock=INT_MAX;
       int maxprofit=0;
       for(int i=0;i<prices.size();i++){
        if(bystock<prices[i]){
            int profit=prices[i]-bystock;
            if(maxprofit<profit){
                maxprofit=profit;
            }
        }
        else{
            bystock=prices[i];
        }
        return maxprofit;
    }
}


int maxProfit(vector<int>& prices) {
    int bystock = INT_MAX;
    int maxprofit = 0;

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] > bystock) {
            int profit = prices[i] - bystock;
            if (profit > maxprofit) {
                maxprofit = profit;
            }
        } else {
            bystock = prices[i];
        }
    }

    return maxprofit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}

