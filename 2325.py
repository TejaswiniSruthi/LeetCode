key=key.replace(" ","")
p=""
s="abcdefghijklmnopqrstuvwxyz "
for char in key:
  if char not in p:
    p+=char
    p+=" "
data=dict(zip(p,s))
p=""
for i in message:
  p+=data[i]
return p
