class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        
        arr = []
        healthy =0
       # rot = 0
        for row in range(len(grid)):
            for col in range(len(grid[0])):
                if grid[row][col] == 2:
                    arr.append((row, col))
                    #rot += 1
                elif grid[row][col] == 1:
                    healthy += 1

        if(healthy == 0):
            return 0

        def search(y: int, x: int, nextbatch: List[tuple[int, int]]) -> int:
            if( y >= len(grid) or x >= len(grid[0]) or x < 0 or y < 0 or grid[y][x] != 1 ):
                return 0
            else:
                grid[y][x] = 2
                nextbatch.append((y, x))
                return 1;

           
        time = 0
        while arr:
            size_rot = len(arr)
            nextbatch = []
            for i in range(size_rot):
                y, x = arr.pop()
                healthy -= search(y+1, x, nextbatch)
                healthy -= search(y-1, x, nextbatch)
                healthy -= search(y, x+1, nextbatch)
                healthy -= search(y, x-1, nextbatch)
            time += 1
            arr = nextbatch

        if 0 != healthy:
            return -1
        
        return time -1
