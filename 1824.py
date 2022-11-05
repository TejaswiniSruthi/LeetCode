def obs(i,j,mat):
    if i==0:
        if mat[i+1][j]!=1:
            i+=1
            return i
        if mat[i+2][j]!=1:
            i+=2
            return i
    if i==1:
        if mat[i+1][j]!=1:
            i+=1
            return i
        if mat[i-1][j]!=1:
            i-=1
            return i
    if i==2:
        if mat[i-1][j]!=1:
            i-=1
            return i
        if mat[i-2][j]!=1:
            i-=2
            return i

class Solution:
    def minSideJumps(self, obstacles: List[int]) -> int:
        if (1 not in obstacles and 2 in obstacles and 3 in obstacles) or (3 not in obstacles and 2 in obstacles and 1 in obstacles):
            return 1
        n=len(obstacles)
        mat=[]
        for i in range(3):
            arr=[0]*n
            mat.append(arr)
            for j,ele in enumerate(obstacles):
                if i+1==ele:
                    mat[i][j]=1
        i=1
        j=ju=0
        while(j!=n-1):
            if mat[i][j+1]==0:
                j+=1
            else:
                i=obs(i,j,mat)
                ju+=1
        return ju
