/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    static int ans[10000];
    int k=0;
    for (int i=0;i<numsSize;i++)
    {
        ans[k]=nums[i];
        k++;
    }
    for(int j=numsSize-1;j>=0;j--)
    {
        ans[k]=nums[j];
        k++;
    }
    *returnSize=2*numsSize;
    return ans;
        
}
