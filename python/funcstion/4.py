l=[1,2,3,"mrugal","het",[1,2,3,4]]
def test9(a):
    l=[]
    for i in a:
        if type(i)==list:
            for j in i:
                l.append(j)
        else :
            if type(i)==int or type(i)==float:
                l.append(i)
                return l
          
        
            

                
    
                