vector<int> Solution::solve(vector<int> &A, int B) {
    
    int Loss=0, totalProfit=0;
    
    vector<int> vec;
    
    for(int i=0; i<A.size(); i++)
    {
        if(i%B==0)
        {
            if(i!=0)
                vec.push_back(Loss);
            Loss = 0;
        }
        else
            Loss+=abs(A[i]-A[i-1]);
        if(i!=0)
            totalProfit+=abs(A[i]-A[i-1]);
    }
    vec.push_back(Loss);
    vec.push_back(totalProfit);
    
    return vec;
    
}
