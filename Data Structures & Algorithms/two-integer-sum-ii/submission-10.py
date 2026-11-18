class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        lpointer = 0
        rpointer = len(numbers) -1

        while lpointer < rpointer:

            cursum = numbers[lpointer] + numbers[rpointer]

            if(cursum == target):
                return [lpointer+1, rpointer+1]

            if(target < cursum):
                rpointer -= 1
            else:
                lpointer += 1

            '''
                for i in range(len(numbers)):
                    for j in range(i + 1, len(numbers)):

                        if numbers[i] + numbers[j] == target:
                            return [i+1, j+1]
            '''
        return 0;