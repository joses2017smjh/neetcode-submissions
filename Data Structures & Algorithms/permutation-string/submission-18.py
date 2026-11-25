class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        checks1 = {}
        checks2 = {}

        if len(s1) > len(s2):
            return False

        sliding = 0
        for char in s2[:len(s1)]:
            checks2[char] = checks2.get(char,0) + 1
            
        for char in s1:
            checks1[char] = checks1.get(char, 0) + 1

        
        if checks1 == checks2:
            return True

        for i in range(len(s1),len(s2)):
            charright = s2[i]
            checks2[charright] = checks2.get(charright, 0) + 1
            char = s2[i - len(s1)]
            checks2[char] = checks2.get(char, 0) -1

            if checks2[char]  == 0:
                del checks2[char] 

            if checks1 == checks2:
                return True

        
        return False
        