        ntext=text.split()
        count=0
        n=len(ntext)
        for i in ntext:
            for j in brokenLetters:
                if j in i:
                    count+=1
                    break
        return (n-count)
