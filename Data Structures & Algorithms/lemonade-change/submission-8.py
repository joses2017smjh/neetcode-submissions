class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        five, ten = 0, 0
        for i in range(len(bills)):
            if(i == 0):
                if(bills[i] != 5):
                    return False;
                else:
                    five += 1
                    continue
            if bills[i] == 5:
                five += 1
            if bills[i] == 10:
                five -= 1
                ten += 1
            if bills[i] == 20:
                if ten >= 1:
                    ten -=1
                    five -=1
                else:
                    five-= 3
            if five < 0 or ten < 0:
                return False
        return True