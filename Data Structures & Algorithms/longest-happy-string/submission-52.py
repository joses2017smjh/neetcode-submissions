class Solution:
    def longestDiverseString(self, a: int, b: int, c: int) -> str:
        arr = [(-a, 'a'), (-b, 'b'), (-c, 'c')]
        heapq.heapify(arr);

        happy = ""
        prev = ''


        while arr:
            
            cur, char = heapq.heappop(arr)

            if len(happy) >= 2 and happy[-1] == char and char == happy[-2]:
                
                
                if not arr:
                  return happy
                

                cur1, char1 = heapq.heappop(arr)
 

                if cur1 < 0:
                    happy += char1
                    cur1 += 1
                    if cur1 < 0:
                        heapq.heappush(arr, (cur1, char1))
                heapq.heappush(arr, (cur, char))

            else:
                if cur < 0:
                    happy += char
                    cur += 1
                    if cur < 0:
                        heapq.heappush(arr, (cur, char))

        return happy
