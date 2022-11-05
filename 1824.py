obstacles = [0,1,2,3,0]
mat=[]
n=len(obstacles)
for i in range(3):
    arr=[0]*n
    mat.append(arr)
    for j,ele in enumerate(obstacles):
        if i+1==ele:
            mat[i][j]=1
while(True):
