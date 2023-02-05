//  greedy algo for minimum coins:
/*
int minCoins(int coins[], int n, int amounts)
{
    1.Sort coins[] in decreasing order.
    2.int res=0;
    3.for(int i=0;i<n;i++)
    {
        if(coins[i]<=amount)
        {
            int c=floor(amount/coin[i]);
            res=res+c;
            amount=amount-c*coin[i];
        }
        if(amount==0)
            break;
    }
    4.return res;
}
*/

/*
General Structure:

getOptimal(item arr[], int n)
1.Initialize: res=0
2.while(All items are not considered)
{
    i=selectAnItem()
    if(feasible(i))
        res=res+i;
}
3.return res
*/

/*
Applications:
Finding Optimal Solutions:
    Activity Selections
    Fractional Knapsack
    Job Sequencing
    Prim's Algorithm
    Kruskal's Algorithm
    Dijkstra's Algorithm
    Huffman Coding

Finding close to optimal solutions for NP Hard Problems like travelling salesman.
*/