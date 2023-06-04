'''score={}
score["test1"]={}
score["test2"]={}
score["test1"]["dh"]=34
score["test2"]["dh"]=23
score["test1"]["ko"]=345
print(score)
'''

'''
d={}
for l in "abcdefghi":
    d[l]=l
d["i"]
print(d["a"])
'''
'''

for n in ["dh","ko"]:
    total={}
    total["dh"]={}
    total["ko"]={}
    score={}
    total[n]=0
    for match in score.keys():
        if n in score[match].keys():
            total[n]=total[n]+score[match][n]
'''

'''
def square(x):
    print(x*x)
def apply(f,x): 
        square(x)
#apply(square,5,2) 
apply(square,5)
'''

'''
#list(map(square,filter(iseven,range(100))))
def square(x):
    print(x*x)
def iseven(x):
    print(x%2==0)  
square(8)
iseven(68)     
[square(x) for x in range(100) if iseven(x)]     
'''

'''
l=[(x,y,z) for x in range(100) for y in range(100) for z in range(100) if x*x+y*y==z*z]
#l=[(x,y,z) for x in range(100) for y in range(x,100) for z in range(y,100) if x*x+y*y==z*z]
print(l)
'''
'''
l=[ [0 for i in range(3)] for j in range(4)]
#l[1][1]=7
print(l)
'''
'''
l=[0 for i in range(3)]
p=[l for j in range(4)]
p[1][1]=7
print(p) 
'''
'''
l=input("type number")      #write number
l=input("type number :")     #wite  number with space
l=input("type number : \n")   #write number in next line
print(l)
'''

'''
(x,y)=(7,10)
print("x is",x,"and y is",y,".")
print("x is",x,"and y is",y,".",sep="")
print("x is ",x," and y is ",y,".",sep="")
'''
'''
print("countinue",end=" ")
print("on the",end=".\n")
print("next line.")
'''
'''
s="    hello  2  "
print(s)
t=s.rstrip()
print(t)
t=s.lstrip()
print(t)
t=s.strip()
print(t)
'''
'''
s="sakshi is bittu and bittu is guutu"
print(s.find("bittu"))
print(s.replace("bittu","bitts"))
'''
'''
s="67879"
print(s.split("7"))
p="s,k,g"
print(p.split(","))
'''
'''
s="helLo woRlD"
print(s.capitalize())
print(s.lower())
print(s.upper())
print(s.title())
print(s.swapcase())
print(s.center(20,"*"))
'''