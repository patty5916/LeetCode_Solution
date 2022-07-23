#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int *result = (int*)malloc(2*sizeof(int));
    
    int max = nums[0];
    int min = nums[0];
    int i;
    for(i=1; i<numsSize; i++){
        max = max>nums[i]? max:nums[i];
        min = min<nums[i]? min:nums[i];
    }
    
    int mapSize = max-min+1;
    int *map  = calloc(mapSize-1, sizeof(int));
    map[nums[0]-min]=-1;
    for (i=1; i<numsSize; i++){
        map[nums[i]-min] = i;
    }
    
    int index;
    for(i=0; i<numsSize; i++){
        index = target-nums[i]-min;
        if (index<0 || index>mapSize) continue;
        if (map[index]){
            result[0] = i;
            result[1] = map[index];
            
            if (map[index]<0) result[1] = 0;
            if (result[0]==result[1]) continue;
            
            free(map);
            return result;
        }
    }
    return result;
}