int findDuplicate(vector<int> &arr)
{
    int res = 0;
    // Write your code here
    for (int i = 0; i < arr.size(); i++)
    {
        res = res ^ i ^ arr[i];
    }
    return res;
}
