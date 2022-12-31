def check_pro(array):
    pro=1
    for i in range(0,len(array)):
        pro*=array[i]
    return pro

def check_sum(array):
    sum=0
    for i in range(0,len(array)):
        sum+=array[i]
    return sum

testcases=int(input())
while(testcases!=0):
    size=int(input())
    array=input().split()
    array_int=[]
    for i in array:
        array_int.append(int(i))
    sum=0
    pro=1
    step=0
    for i in array_int:
        sum+=i
        pro*=i
    
    if sum!=0 and pro!=0:
        print(0)
    
    if sum==0 or pro==0:
        for i in range(0,len(array_int)):
            if array_int[i]==0:
                step+=1
                array_int[i]+=1
        
    


    testcases-=1