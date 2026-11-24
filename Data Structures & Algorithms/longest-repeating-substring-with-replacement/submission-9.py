class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        mapofchar = {}
        lpointer = 0
        window = 0
        for rpointer in range(len(s)):
            mapofchar[s[rpointer]] = mapofchar.get(s[rpointer], 0) + 1
            while((rpointer - lpointer + 1) - max(mapofchar.values())) > k:
                mapofchar[s[lpointer]] -= 1
                lpointer += 1
            window = max(window, (rpointer-lpointer +1))
        return window        
            