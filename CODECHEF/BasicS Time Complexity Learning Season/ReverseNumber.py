# cook your dish here
n=int(input())
for i in range(0,n):
    m=input()
    m=list(m)
    m=[int(j) for j in m ]
    p=m[::-1]
    rev=0
    for j in p:
        rev=(10 * rev )+j
    print(rev) 