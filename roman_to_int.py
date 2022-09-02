        d={'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        j=s[0]
        p=d[j]
        r=0
        for i in s:
            if(p<d[i]):
                r+=(d[i]-(2*p))
                p=d[i]
            else:
                r+=d[i]
                p=d[i]
        return r
