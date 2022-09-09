        dic={}
        for i in nums:
            if i not in dic:
                dic[i]=1
            else:
                dic[i]+=1
        for i in dic.values():
            if i%2!=0:
                return False
        return True
