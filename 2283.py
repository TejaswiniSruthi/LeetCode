        dic1={}
        dic2={}
        arr=[]
        arre=[]
        val = list(map(int, num))
        for i in val:
            if i not in dic1:
                dic1[i]=1
            else:
                dic1[i]+=1
        for count, elem in enumerate(val):
            print(count, elem)
            arr.append(count)
            arre.append(elem)
        dic2=dict(zip(arr,arre))
        val0=set(dic1.keys())
        val1=set(dic2.keys())
        for i in val1:
            if i not in val0:
                dic2.pop(i)
        return(dic1==dic2)
